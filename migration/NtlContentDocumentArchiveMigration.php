<?php
/**
* @file
* Definition of NtlContentDocumentArchiveMigration
*/
class NtlContentDocumentArchiveMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'ntl_document_archive',
      'destination_type' => 'ntl_document_archive',
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
      'field_da_box_group',
    ));
  
    $this->addUnmigratedDestinations(array(
     'field_da_locator:language',
     'field_da_box_comments:language',
     'field_da_accession:language',
     'field_da_box_id:language',
     'field_da_box_label:language',
     'field_da_series:language',
     'field_da_box_title:language',
     'field_da_file_comments:language',
     'field_da_file_title:language',
     'field_da_box_title:format',
     'field_da_file_title:format',
    ));

    // Some fields named the same in Ntl D6 than D7.

    $this->addSimpleMappings(array(
      'field_da_accession',
      'field_da_box_id',
      'field_da_box_title',
      'field_da_file',
      'field_da_file_comments',
      'field_da_file_title',
      'field_da_locator',
      'field_da_series',
    ));

    $this->addFieldMapping('field_da_box_comments', 'field_da_boc_comments');
    $this->addFieldMapping('field_da_box_label', 'field_da_box_lable');
    $this->addFieldMapping('field_da_snlsort','field_da_slnsort');

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
