<?php
/**
* @file
* Definition of NtlContentProtocolMigration
*/
class NtlContentProtocolMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'protocol',
      'destination_type' => 'protocol',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    $this->addUnmigratedSources(array(
     'upload',
     'upload:description',
     'upload:list',
     'upload:weight',
     'revision_uid',
     'revision',
     'log',
    ));
  
    $this->addUnmigratedDestinations(array(
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_term_categories:create_term',
      'field_term_categories:ignore_case',
      'field_ntl_keywords:create_term',
      'field_ntl_keywords:ignore_case',
      'field_protocol_beg_end_date:timezone',
      'field_protocol_beg_end_date:rrule',
      'field_protocol_format:language',
      'field_protocol_id:language',
      'field_protocol_type:language',
    ));
// migrate term relationships. there might be another family, Tags. check

    $this->addFieldMapping('field_keywords', '4')
       ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
       ->defaultValue('tid');

    $this->addFieldMapping('field_ntl_keywords', '5')
       ->sourceMigration('NtlTaxonomyNtlKeywords');
    $this->addFieldMapping('field_ntl_keywords:source_type')
       ->defaultValue('tid');

    $this->addFieldMapping('field_term_categories', '12')
       ->sourceMigration('NtlTaxonomyNtlKeywords');
    $this->addFieldMapping('field_term_categories:source_type')
       ->defaultValue('tid');


// 3 fields are named the same in Ntl D6 than D7.

    $this->addSimpleMappings(array('field_protocol_id','field_protocol_type','field_protocol_format','field_protocol_beg_end_date'));

    $this->addFieldMapping('field_protocol_beg_end_date:to', 'field_protocol_beg_end_date:value2');

// entity reference field_protocol_owner_ref

    $this->addFieldMapping('field_protocol_owner_ref', 'field_protocol_owner_ref')
      ->sourceMigration('DeimsContentPerson');

  }
  public function prepareRow($row) {
    parent::prepareRow($row);
  }
  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
   
}
