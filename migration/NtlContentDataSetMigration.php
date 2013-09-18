<?php

/**
 * @file
 * Definition of NtlContentDataSetMigration.
 */

class NtlContentDataSetMigration extends DeimsContentDataSetMigration {

  public function __construct(array $arguments) {
  
    parent::__construct($arguments);
// added } -- finish -- placeholder for future tweaks
   }
/*
    $this->addUnmigratedSources(array(
      'field_dataset_issignature',
      'field_dataset_station_acronym',
      'field_dataset_sevid',
      'field_dataset_restricted',
    ));

    // The 'Ntl LTER Information Manager' is node ???1048 in the Drupal 6
    // database. Add this as the default person to the metadata provider, and
    // publisher fields.
    $this->removeFieldMapping('field_person_metadata_provider');
    $this->addFieldMapping('field_person_metadata_provider')
      ->sourceMigration('DeimsContentPerson')
      ->defaultValue(1048);
    $this->removeFieldMapping('field_person_publisher');
    $this->addFieldMapping('field_person_publisher')
      ->sourceMigration('DeimsContentPerson')
      ->defaultValue(1048);

    $this->addFieldMapping('field_core_areas', '1')
      ->sourceMigration('DeimsTaxonomyCoreAreas');
    $this->addFieldMapping('field_core_areas:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_keywords', '9')
      ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
      ->defaultValue('tid');
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    if (empty($row->field_dataset_id_value) && !empty($row->field_dataset_sevid_value)) {
      $row->field_dataset_id_value = $row->field_dataset_sevid_value;
    }
  }
*/
}
