<?php
/**
* @file
* Definition of NtlContentSampleDendyMigration
*/
class NtlContentSampleDendy extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'ntl_sample_archive_dendy',
      'destination_type' => 'sample_archive_dendy_samples',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    // This content type does not have a body field.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:language');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');
    $this->addUnmigratedSources(array('body', 'teaser', 'format'));

    // mappings
    $this->addFieldMapping('field_sads_year','field_sads_year');
    $this->addFieldMapping('field_sads_lake','field_sads_lake');
    $this->addFieldMapping('field_sads_box','field_sads_box');
    $this->addFieldMapping('field_sads_comments','field_sads_comments');
    $this->addFieldMapping('field_sads_accession','field_sads_accession');
    $this->addFieldMapping('field_sads_site','field_sads_site');
    $this->addFieldMapping('field_sads_rep','field_sads_rep');
    $this->addFieldMapping('field_sads_gear','field_sads_gear');

    $this->addFieldMapping('field_sads_set_date','field_sads_set_date');
    $this->addFieldMapping('field_sads_retrieve_date','field_sads_retrive_date');

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
