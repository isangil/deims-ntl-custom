<?php
/**
* @file
* Definition of NtlContentSamplePhytoSlidesMigration
*/
class NtlContentSlidesPhytoMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'ntl_sample_archive_phyto_slides',
      'destination_type' => 'sample_archive_phyto_slides',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    // This content type does not have a body field.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:language');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');
    $this->addUnmigratedSources(array('body', 'teaser', 'format'));

    $this->addUnmigratedSources(array(
     'revision',
     'log',
     'upload',
     'upload:description',
     'upload:list',
     'upload:weight',
     'revision_uid',
    ));

    $this->addUnmigratedDestinations(array(
     'field_sapsl_accession:language',
     'field_sapsl_box:language',
     'field_sapsl_comments:language',
     'field_sapsl_lake:language',
     'field_sapsl_depth:language',
     'field_sapsl_sample_date:to',
     'field_sapsl_sample_date:timezone',
     'field_sapsl_sample_date:rrule',
    ));
    // mappings
    $this->addFieldMapping('field_sapsl_year','field_sapsl_year');
    $this->addFieldMapping('field_sapsl_lake','field_sapsl_lake');
    $this->addFieldMapping('field_sapsl_box','field_sapsl_box');
    $this->addFieldMapping('field_sapsl_comments','field_sapsl_comments');
    $this->addFieldMapping('field_sapsl_accession','field_sapsl_accession');
    $this->addFieldMapping('field_sapsl_depth','field_sapsl_depth');
    $this->addFieldMapping('field_sapsl_slides','field_sapsl_slides');
    
    $this->addFieldMapping('field_sapsl_sample_date','field_sapsl_sample_date');

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
