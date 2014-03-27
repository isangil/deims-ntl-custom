<?php
/**
 * @file
 * Migrate module integration for the NTL module.
 */
/**
 * Implements hook_migrate_api().
 */
function ntl_migrate_api() {
  $info = array(
    'api' => 2,
    'migrations' => array(
      'NtlContentDocumentArchive' => array(
        'class_name' => 'NtlContentDocumentArchiveMigration',
      ),
      'NtlContentImageGallery' => array(
        'class_name' => 'NtlContentImageGalleryMigration',
      ),
      'NtlContentProtocol' => array(
        'class_name' => 'NtlContentProtocolMigration',
      ),
      'NtlContentResearchHighLights' => array(
        'class_name' => 'NtlContentResearchHighlightsMigration',
      ),
      'NtlContentSamplesDendy' => array(
        'class_name' => 'NtlContentSampleDendyMigration',
      ),
      'NtlContentSampleFishscalesMigration' => array(
	'class_name' => 'NtlContentSampleFishscalesMigration',
      ),
      'NtlContentSamplePhytoS' => array(
	'class_name' => 'NtlContentSamplePhytoSMigration',
      ),
      'NtlContentSlidesPhyto' => array(
	'class_name' => 'NtlContentSlidesPhytoMigration',
      ),
      'NtlContentSampleZooMigration' => array(
	'class_name' => 'NtlContentSampleZooMigration',
      ),
      // Core area vocab is entangled with other vocab!
      'NtlTaxonomyNtlKeywords' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'NTL Keywords' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '5',
        'destination_vocabulary' => 'ntl_keywords',
      ),
      'NtlTaxonomyTags' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Tags' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '3',
        'destination_vocabulary' => 'tags',
      ),
      'NtlTaxonomySiteCategory' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Site-Category' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '6',
        'destination_vocabulary' => 'section',
      ),
      'NtlTaxonomyCategories' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Categories' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '12',
        'destination_vocabulary' => 'categories',
      ),
      'NtlTaxonomyImageGalleries' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Image Galleries' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '7',
        'destination_vocabulary' => 'image_galleries',
      ),
      'DeimsTaxonomyLTERControlled' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'LTER Controlled' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '4',
        'destination_vocabulary' => 'lter_controlled_vocabulary',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = DEIMS_D6_MIGRATION_GROUP;
  }

  return $info;
}

/**
 * Implements hook_deims_migration_overrides().
 */
function ntl_deims_migration_overrides() {
  return array(
    'DeimsContentDataSet' => array('class_name' => 'NtlContentDataSetMigration'),
    'DeimsContentOrganization' => array('class_name' => 'NtlContentOrganizationMigration'),
    'DeimsContentPage' => array('class_name' => 'NtlContentPageMigration'),
    'DeimsContentResearchProject' => array('class_name' => 'NtlContentProjectMigration'),
    'DeimsContentResearchSite' => array('class_name' => 'NtlContentResearchSiteMigration'),
//    'DeimsContentPerson' => array('class_name' => 'NtlContentPersonMigration'),
//    'DeimsFile' => array('class_name' => 'NtlFileMigration'),
  );
}
