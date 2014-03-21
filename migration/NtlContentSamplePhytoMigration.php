<?php
/**
* @file
* Definition of NtlContentSamplePhytoMigration
*/
class NtlContentSamplePhytoSMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'ntl_sample_archive_phyto_samples',
      'destination_type' => 'sample_archive_phytoplankton',
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
     'field_sapsa_accession:language',
     'field_sapsa_box:language',
     'field_sapsa_comments:language',
     'field_sapsa_lake:language',
     'field_sapsa_depth:language',
     'field_sapsa_year:language',
     'field_sapsa_sample_date:to',
     'field_sapsa_sample_date:timezone',
     'field_sapsa_sample_date:rrule',
    ));
    // mappings
    $this->addFieldMapping('field_sapsa_year','field_sapsa_year');
    $this->addFieldMapping('field_sapsa_lake','field_sapsa_lake');
    $this->addFieldMapping('field_sapsa_box','field_sapsa_box');
    $this->addFieldMapping('field_sapsa_comments','field_sapsa_comments');
    $this->addFieldMapping('field_sapsa_accession','field_sapsa_accession');
    $this->addFieldMapping('field_sapsa_depth','field_sapsa_depth');

    $this->addFieldMapping('field_sapsa_sample_date','field_sapsa_sample_date');

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
