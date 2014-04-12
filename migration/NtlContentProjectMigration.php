<?php
/**
* @file
* Definition of NtlContentProjectMigration
*
*/
class NtlContentProjectMigration extends DeimsContentResearchProjectMigration {

   public function __construct(array $arguments) {

    $arguments += array(
      'source_type' => 'project',
    );

    parent::__construct($arguments);

    $this->removeFieldMapping('field_abstract');
    $this->removeFieldMapping(NULL, 'field_project_description');

    $this->addUnmigratedSources(array(
     'upload',
     'upload:description',
     'upload:list',
     'upload:weight',
     'revision_uid',
     'revision',
     'log',
     'field_collaborators',        // Only one node, really
     'field_equipment',            // About a node only for Equipment
     'field_project_publications', //  No migration handl;er for biblio yet
     'field_project_protocols',    // Only saw two Protocols
    ));

    $this->addUnmigratedDestinations(array(
    'field_abstract',
    'field_abstract:language',
    'field_core_areas',
    'field_core_areas:create_term',
    'field_core_areas:ignore_case',
    'field_core_areas:source_type',
    'field_keywords:create_term',
    'field_keywords:ignore_case',
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
    'field_ntl_keywords:create_term',
    'field_ntl_keywords:ignore_case',
    'field_ongoing',
    'field_related_links',
    'field_related_links:title',
    'field_related_links:attributes',
    'field_related_links:language',
    'field_related_projects',
    'field_related_publications',
    'field_section:create_term',
    'field_section:ignore_case',
    'field_startdate:timezone',
    'field_startdate:rrule',
    ));

    $this->addFieldMapping('field_startdate','field_startdate');
    $this->addFieldMapping('field_startdate:to','field_startdate:value2');
    $this->addFieldMapping('field_related_people','field_investigators')
     ->sourceMigration('NtlContentPersonNew');
    $this->addFieldMapping('field_related_site','field_sites')
      ->sourceMigration('DeimsContentResearchSite');
    $this->addFieldMapping('field_related_data_sets','field_project_datasets')
      ->sourceMigration('DeimsContentDataSet');

    $this->addFieldMapping('field_keywords', '4')
      ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
      ->defaultValue('tid');

    $this->addFieldMapping('field_ntl_keywords', '5')
      ->sourceMigration('NtlTaxonomyNtlKeywords');
    $this->addFieldMapping('field_ntl_keywords:source_type')
      ->defaultValue('tid');

    $this->addFieldMapping('field_section', '6')
      ->sourceMigration('NtlTaxonomySiteCategory');
    $this->addFieldMapping('field_section:source_type')
      ->defaultValue('tid');

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
