<?php
/**
* @file
* Definition of NtlContentSampleFishscalesMigration
*/
class NtlContentSampleFishscalesMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'ntl_sample_archive_fishscales',
      'destination_type' => 'sample_archive_fishscales',
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
     'field_safs_accession:language',
     'field_safs_box:language',
     'field_safs_comments:language',
     'field_safs_lake:language',
     'field_safs_species_name:language',
    ));
    // mappings
    $this->addFieldMapping('field_safs_year','field_safs_year');
    $this->addFieldMapping('field_safs_lake','field_safs_lake');
    $this->addFieldMapping('field_safs_box','field_safs_box');
    $this->addFieldMapping('field_safs_comments','field_safs_comments');
    $this->addFieldMapping('field_safs_accession','field_safs_accession');
    $this->addFieldMapping('field_safs_envelopes','field_safs_envelopes');
    $this->addFieldMapping('field_safs_species_name','field_safs_species_name');

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
