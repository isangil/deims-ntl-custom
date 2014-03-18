<?php
/**
* @file
* Definition of NtlContentSampleZooMigration
*/
class NtlContentSampleZoo extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'ntl_sample_archive_zoop',
      'destination_type' => 'ntl_sample_archive_zoop',
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
    $this->addFieldMapping('field_sazp_year','field_sazp_year');
    $this->addFieldMapping('field_sazp_lake','field_sazp_lake');
    $this->addFieldMapping('field_sazp_box','field_sazp_box');
    $this->addFieldMapping('field_sazp_comments','field_sazp_comments');
    $this->addFieldMapping('field_sazp_accession','field_sazp_accession');
    $this->addFieldMapping('field_sazp_samples','field_sazp_samples');
    $this->addFieldMapping('field_sazp_gear','field_sazp_gear');
    $this->addFieldMapping('field_sazp_depth','field_sazp_depth');
    $this->addFieldMapping('field_sazp_date','field_sazp_date');

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
