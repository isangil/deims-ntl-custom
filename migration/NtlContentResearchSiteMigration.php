<?php
/**
* @file
* Definition of NtlContentResearchSiteMigration
*
*/
class NtlContentResearchSiteMigration extends DeimsContentResearchSiteMigration {


   public function __construct(array $arguments) {

    parent::__construct($arguments);

    $this->removeFieldMapping('field_images:file_replace');
    $this->removeFieldMapping('field_images:source_dir');
    $this->removeFieldMapping('field_images:preserve_files');
    $this->removeFieldMapping('field_images:destination_dir');
    $this->removeFieldMapping('field_images:destination_file');
    $this->removeFieldMapping('field_images');
    $this->removeFieldMapping('field_images:file_class');
    $this->removeFieldMapping(NULL,'field_research_site_core');
    $this->removeFieldMapping(NULL,'field_research_site_legacynid');

    $this->addUnmigratedSources(array(
     'upload',
     'upload:description',
     'upload:list',
     'upload:weight',
     'revision_uid',
     'revision',
     'log',
     'field_research_site_history:format',
     'field_research_site_climate:format',
     'field_research_site_landform:format',
     'field_research_site_geology:format',
     'field_research_site_hydrology:format',
     'field_research_site_soils:format',
     'field_research_site_vegetation:format',
    ));

    $this->addUnmigratedDestinations(array(
    'field_images:alt',
    'field_images:title',
    'field_core_areas',
    'field_core_areas:source_type',
    'field_core_areas:create_term',
    'field_core_areas:ignore_case',
    'field_coordinates:accuracy',
    'field_coordinates:source',
    'field_coordinates:srid',
    ));

    $this->addFieldMapping('field_images','field_research_site_image')
      ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);
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
