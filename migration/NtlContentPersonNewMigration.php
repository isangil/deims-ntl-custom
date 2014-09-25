<?php

/**
 * @file
 * Definition of NtlContentPersonNewMigration.
 */

class NtlContentPersonNewMigration extends Migration {

  protected $dependencies = array('DeimsContentOrganization','DeimsFile');

  public function __construct($arguments) {

   parent::__construct($arguments);
   $this->connection = Database::getConnection('default', 'drupal6');

  // Build the query for where this data is coming from.
   $query = $this->connection->select('content_type_person', 'ctp');
   $query->fields('ctp', 
    array(
     'nid',
     'language',
     'title',
     'uid',
     'status',
     'created',
     'changed',
     'comment',
     'promote',
     'sticky', 
     'tnid',
     'translate',  
     'field_person_organization_value',
     'field_person_phone_value',
     'field_person_fax_value',
     'field_person_email_email',
     'field_person_list_value',
     'field_person_role_value',
     'field_person_title_value',
     'field_person_first_name_value',
     'field_person_last_name_value',
     'field_person_country_value',
     'field_person_state_value',
     'field_person_city_value',
     'field_person_zipcode_value',
     'field_person_address_value',
     'field_person_college_value',
     'field_person_department_value',  
     'field_person_building_value',
     'field_person_specialty_value',
     'field_person_middle_name_value',
     'field_person_image_fid',
     'field_person_webpage_url',
     'field_person_webpage_title',
     'field_person_webpage_attributes',
    ));

    $this->source = new MigrateSourceSQL($query,array(), NULL, array('map_joinable' => FALSE));
    $this->destination = new MigrateDestinationNode('person');

    // Tell Migrate where the IDs for this migration live, and
    // where they should go.
    $source_key_schema = array(
      'nid' => array(
        'type' => 'int',
        'length' => 10,
        'not null' => TRUE,
      ),
    );

    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, $this->destination->getKeySchema());

    // Add our mappings.
    $this->addFieldMapping('tnid','tnid');
    $this->addFieldMapping('language','language');
    $this->addFieldMapping('translate','translate');
    $this->addFieldMapping('created','created');
    $this->addFieldMapping('changed','changed');
    $this->addFieldMapping('status','status');
    $this->addFieldMapping('promote','promote');
    $this->addFieldMapping('sticky','sticky');
    $this->addFieldMapping('comment','comment');
    $this->addFieldMapping('field_phone', 'field_person_phone_value');
    $this->addFieldMapping('field_email', 'field_person_email_email');
    $this->addFieldMapping('field_fax', 'field_person_fax_value');
    $this->addFieldMapping('field_list_in_directory', 'field_person_list_value');
    $this->addFieldMapping('field_person_role', 'field_person_role_value');
    $this->addFieldMapping('field_person_title', 'field_person_title_value');

    $this->addFieldMapping('field_name', 'field_person_first_name_value');
    $this->addFieldMapping('field_name:family', 'field_person_last_name_value');
    $this->addFieldMapping('field_name:middle', 'field_person_middle_name_value');

    $this->addFieldMapping('field_address', 'field_person_country_value');
    $this->addFieldMapping('field_address:administrative_area', 'field_person_state_value');
    $this->addFieldMapping('field_address:locality', 'field_person_city_value');
    $this->addFieldMapping('field_address:postal_code', 'field_person_zipcode_value');
    $this->addFieldMapping('field_address:thoroughfare', 'field_person_address_value');

    $this->addFieldMapping('field_person_image','field_person_image_fid')
     ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_person_image:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_person_image:preserve_files')->defaultValue(TRUE);

    $this->addFieldMapping('field_url','field_person_webpage_url');
    $this->addFieldMapping('field_url:title','field_person_webpage_title');
    $this->addFieldMapping('field_url:attributes','field_person_webpage_attributes');

    $this->addFieldMapping('field_person_college','field_person_college_value');
    $this->addFieldMapping('field_person_department','field_person_department_value');
    $this->addFieldMapping('field_person_specialty','field_person_specialty_value');
    $this->addFieldMapping('field_address:premise','field_person_building_value');

    // Values for field_organization provided in prepare()).
    $this->addFieldMapping('field_organization', NULL)
      ->description('Provided in prepare().');

    $this->addUnmigratedDestinations(array(
      'field_address:sub_administrative_area',
      'field_address:sub_premise',
      'field_address:dependent_locality',
      'field_address:organisation_name',
      'field_address:name_line',
      'field_address:first_name',
      'field_address:last_name',
      'field_address:data',
      'field_name:generational',
      'field_name:credentials',
      'field_person_title:language',
      'field_associated_biblio_author',
      'field_person_college:language',
      'field_person_department:language',
      'field_person_specialty:language',
      'field_person_image:language',
      'field_person_image:alt',
      'field_person_image:title',
      'uid',
      'revision',
      'log',
      'revision_uid',
      'is_new',    
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    // Convert values from 'Yes' and 'No' to integers 1 and 0, respectively.
    $row->field_person_list_value = (!empty($row->field_person_list_value) && $row->field_person_list_value == 'Yes' ? 1 : 0);

    // Convert a country name into a country code for addressfield.
    if (!empty($row->field_person_country_value)) {
      $country_code = $this->getCountryCode($row->field_person_country_value);
      if (!$country_code) {
        $country_code = $this->getDefaultCountryCode();
        // Default the country to the US to ensure that this field is saved.
        $this->queueMessage("Invalid country value '{$row->field_person_country_value}' has been changed to default {$country_code} so the address field will save.", MigrationBase::MESSAGE_INFORMATIONAL);
      }
      $row->field_person_country_value = $country_code;
    }
    elseif (!empty($row->field_person_address_value) || !empty($row->field_person_city_value) || !empty($row->field_person_state_value)) {
      // Default the country to the US to ensure that this field is saved.
      $row->field_person_country_value = $this->getDefaultCountryCode();
      $this->queueMessage("Empty country value with non-empty address has been changed to default {$row->field_person_country} so the address field will save.", MigrationBase::MESSAGE_INFORMATIONAL);
    }

    if ($row->field_person_zipcode_value == 0) {
      $row->field_person_zipcode_value = NULL;
    }
  }

  public function prepare($node, $row) {
    $node->field_organization[LANGUAGE_NONE] = $this->getOrganization($node, $row);

    // Force the auto_entitylabel module to leave $node->title alone.
    $node->auto_entitylabel_applied = TRUE;

    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }

  public function getOrganization($node, $row) {
    $field_values = array();

    // Search for an already migrated organization entity with the same title
    // and link value.
    if (!empty($row->field_person_organization_value)) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'organization');
      $query->propertyCondition('title', $row->field_person_organization_value);
      $results = $query->execute();
      if (!empty($results['node'])) {
        $field_values[] = array('target_id' => reset($results['node'])->nid);
      }
    }
    return $field_values;
  }

  /**
   * Convert a country name to it's country two-character code.
   *
   * @param string $country_name
   *   The country name.
   *
   * @return string
   *   The two-letter country code if found, or FALSE if the country was not
   *   found.
   */
  public function getCountryCode($country_name) {
    include_once DRUPAL_ROOT . '/includes/locale.inc';
    $countries = country_get_list();
    if (isset($countries[$country_name])) {
      // Do nothing. Country is already a valid code.
      return $country_name;
    }
    elseif ($code = array_search($country_name, $countries)) {
      return $code;
    }
    else {
      return FALSE;
    }
  }

  public function getDefaultCountryCode() {
    static $default = NULL;

    if (!isset($default)) {
      $instance = field_info_instance('node', 'field_address', 'person');
      if (!empty($instance['default_value'][0]['country'])) {
        $default = $instance['default_value'][0]['country'];
      }
      else {
        $default = variable_get('site_default_country', 'US');
      }
    }

    return $default;
  }
}
