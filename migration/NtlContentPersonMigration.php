<?php

/**
 * @file
 * Definition of NtlContentPersonMigration.
 */

class NtlContentPersonMigration extends DeimsContentPersonMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // field_person_pubs does not exist
    $this->removeFieldMapping(NULL, 'field_person_pubs');

    $this->addUnmigratedSources(array(
      'field_person_status',
      'field_person_pubs',
      'field_person_city_state_zip',
      'field_person_image:list',
      'field_person_image_data',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
      'revision',
      'revision_uid',
      'log',
    ));

    $this->addFieldMapping('field_person_image','field_person_image');
    $this->addFieldMapping('field_url','field_person_webpage');
    $this->addFieldMapping('field_url:title','field_person_webpage:title');
    $this->addFieldMapping('field_url:attributes','field_person_webpage:attributes');
    $this->addFieldMapping('field_address:sub_premise','field_person_room');
    $this->addFieldMapping('field_name:middle','field_person_middle_name');
    $this->addFieldMapping('field_person_college','field_person_college');
    $this->addFieldMapping('field_person_department','field_person_department');
    $this->addFieldMapping('field_person_specialty','field_person_specialty');
    $this->addFieldMapping('field_address:premise','field_person_building');
    $this->addFieldMapping('field_person_mo_role','field_person_mo_role');
    $this->addFieldMapping('field_person_wsc_role','field_person_wsc_role');

    $this->addUnmigratedDestinations(array(
      'field_associated_biblio_author',
      'field_person_college:language',
      'field_person_department:language',
      'field_person_specialty:language',
      'field_person_image:file_class',
      'field_person_image:language',
      'field_person_image:preserve_files',
      'field_person_image:destination_dir',
      'field_person_image:destination_file',
      'field_person_image:file_replace',
      'field_person_image:source_dir',
      'field_person_image:urlencode',
      'field_person_image:alt',
      'field_person_image:title',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function getOrganization($node, $row) {
    $field_values = array();

    // Search for an already migrated organization entity with the same title
    // and link value.
    if (!empty($row->{'field_person_organization'})) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'organization');
      $query->propertyCondition('title', $row->{'field_person_organization'});
      $results = $query->execute();
      if (!empty($results['node'])) {
        $field_values[] = array('target_id' => reset($results['node'])->nid);
      }
    }

    return $field_values;
  }
}
