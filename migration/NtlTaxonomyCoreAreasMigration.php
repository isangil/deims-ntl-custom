<?php

/**
 * @file
 * Definition of NtlTaxonomyCoreAreasMigration.
 */
class NtlTaxonomyCoreAreasAndTagsMigration extends DrupalTerm6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => 'NTL Core Area Terms are in Source Tags vid->3',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_vocabulary' => '3',
      'destination_vocabulary' => 'core_areas',
    );
    parent::__construct($arguments);
    
    $this->addFieldMapping('vocabulary_machine_name', 'vname'); 
  }
  public function prepareRow($row) {
//    if ( term contains LTER Core Area -  {
    if (preg_match('/LTER Core Area -/',$row->name) ) {
      $row->vname = 'core_areas';
      $row->name = preg_replace('/LTER Core Area -/','',$row->name);
    } else {
      $row->vname = 'tags';
    }
  }
}
