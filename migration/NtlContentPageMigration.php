<?php
/**
* @file
* Definition of NtlContentPageMigration
*
*  Visual inspection shows no keywords attached
*  nor files attached, but just in case, all
*  pictures are references in the body.
*/
class NtlContentPageMigration extends DeimsContentPageMigration {


   public function __construct(array $arguments) {

    parent::__construct($arguments);

    $this->addUnmigratedSources(array(
     'upload',
     'upload:description',
     'upload:list',
     'upload:weight',
     'revision_uid',
     'revision',
     'log',
     '5',
    ));

    $this->addUnmigratedDestinations(array(
    'field_files',
    'field_files:file_class',
    'field_files:language',
    'field_files:preserve_files',
    'field_files:destination_dir',
    'field_files:destination_file',
    'field_files:file_replace',
    'field_files:source_dir',
    'field_files:urlencode',
    'field_files:description',
    'field_files:display',
    'field_images',
    'field_images:file_class',
    'field_images:language',
    'field_images:preserve_files',
    'field_images:destination_dir',
    'field_images:destination_file',
    'field_images:file_replace',
    'field_images:source_dir',
    'field_images:urlencode',
    'field_images:alt',
    'field_images:title',
    ));
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
