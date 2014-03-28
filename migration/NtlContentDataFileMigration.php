<?php

/**
 * @file
 * Definition of NtlContentDataFileMigration.
 */

class NtlContentDataFileMigration extends DeimsContentDataFileMigration {

  public function __construct(array $arguments) {

    parent::__construct($arguments);
   
    $this->removeFieldMapping(NULL,'field_data_file_data_set');

    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'field_data_file_data',
      'field_datatable_id',  // Datatable ID
      'field_qyear_attr',    // qyear_attr
      'field_qyear_max',     // qyear_max
      'field_suppress_nulls',  // Supress Nulls
      'field_flags',  // Flags
      'field_datatable_dataset_id',  // Dataset ID
      'field_datatable_order',     // Table Order
      'field_datatable_archiveurl',  // Data archive URL
      'field_data_file:list',
      'field_datafile_description:format',
      'field_lterquerylink',  // Data Download
      'field_dataset_referrer', // Associated Data Set
    ));

    $this->addUnmigratedDestinations(array(
      'field_date_range:timezone',	
      'field_date_range:rrule',
    ));
      $this->addFieldMapping('field_deims_data_explorer','field_datafile_external_source')   
       ->description('Handled in prepareRow()'); 
      $this->addFieldMapping('field_deims_data_explorer:table','field_datafile_entity_name') 
       ->description('Handled in prepareRow()');
  }

  public function prepareRow($row) {

    // Fix double/single quotes in SEV.

    if (substr($row->field_datafile_external_source,0,7) == 'dbmaker') {
        $row->field_datafile_external_source = 'dbmaker';
    } else {
        $row->field_datafile_external_source = '';
        $row->field_datafile_entity_name = '';
    }

    parent::prepareRow($row);
  }
}
