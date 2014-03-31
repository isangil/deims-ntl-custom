<?php

/**
 * @file
 * Definition of NtlContentDataSetMigration.
 */

class NtlContentDataSetMigration extends DeimsContentDataSetMigration {

  public function __construct(array $arguments) {
  
    parent::__construct($arguments);

    $this->removeFieldMapping('field_eml_revision_id');
    $this->addUnmigratedSources(array(
      'revision',
      'revision_uid',
      'log',
      'field_emlview',
      'field_dataset_biblio_ref',       // would be great, but cannot do yet.
      'field_dataset_mapimg',  // Map image DNM Map Img: replace with gmaps-site    
                               // DNM to dataset, perhaps needed in RS
      'field_dataset_geodesc',	// Geographic Description
      'field_dataset_coor_n',	// North Bound Coordinate
      'field_dataset_coor_s',	// South Bound Coordinate
      'field_dataset_coor_e',	// East Bound Coordinate
      'field_dataset_coor_w',	// West Bound Coordinate
                        // DB related, most likely DNM, but some may be used (schemaref, etc)
      'field_lterquerylink',	// Data Download    DE related DNM
      'field_dataset_query_project_id',  // Query Project ID DB
      'field_dataset_query_visible',  // Query Visible  DB  (may be used to activate the DS-DE fields)
      'field_dataset_req_category',  //  Req Category DB
      'field_dataset_text_source',   //  Text Source   DB    
      'field_dataset_taxon_cov',    //  Taxon Cov     DB
      'field_dataset_type',	  //  Dataset Type  DB
      'field_dataset_geogcov_id',  // Geogcov ID    DB
      'field_dataset_order',       // Dataset Order DB
      'field_dataset_sampling_freq', //  Sampling frequency DB
      'field_dataset_number_sites  Number of Sites    DB
      'field_dataset_category_id      Category ID  DB
      'field_dataset_enddate_text',  //  Ending Date DB
      'field_dataset_begdate_text',  //  begginimg Date DB
      'field_emlview',   //	EML Download  Do not migrate
    ));

   // More Sources: 

   // field_dataset_project_ref	Research Project
   // Perhaps this is a reverse node-ref?
   // field_dataset_protocol_ref   // We could....but only one protocol.
     
   $this->addFieldMapping('field_eml_revision_id','field_dataset_revision');


    $this->addUnmigratedDestinations(array(
      'field_core_areas',
      'field_core_areas:source_type',
      'field_core_areas:ignore_case',
      'field_core_areas:create_term',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_ntl_keywords:create_term',
      'field_ntl_keywords:ignore_case',
      'field_tags:create_term',
      'field_tags:ignore_case',
      'field_section:create_term',
      'field_section:ignore_case',
      'field_term_categories:create_term',
      'field_term_categories:ignore_case',
      'field_date_range:timezone',
      'field_date_range:rrule',
      'field_publication_date:timezone',
      'field_publication_date:rrule',
      'field_publication_date:to',
      'field_related_publications',
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

//   3 Tags
    $this->addFieldMapping('field_tags', '3')
      ->sourceMigration('NtlTaxonomyTags');
    $this->addFieldMapping('field_tags:source_type')
      ->defaultValue('tid');

// 5 NTL keywords
    $this->addFieldMapping('field_ntl_keywords', '5')
      ->sourceMigration('NtlTaxonomyNtlKeywords');
    $this->addFieldMapping('field_ntl_keywords:source_type')
      ->defaultValue('tid');

// 6 Site-cats
    $this->addFieldMapping('field_section', '6')
      ->sourceMigration('NtlTaxonomySiteCategory');
    $this->addFieldMapping('field_section:source_type')
      ->defaultValue('tid');

// 12 categories
    $this->addFieldMapping('field_term_categories', '12')
      ->sourceMigration('NtlTaxonomyCategory');
    $this->addFieldMapping('field_term_categories:source_type')
      ->defaultValue('tid');

// 4 LTER keys
    $this->addFieldMapping('field_keywords', '4')
      ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
      ->defaultValue('tid');

  }

  public function prepareRow($row) {
    parent::prepareRow($row);

  }
}
