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
      'NtlContentImageGallery' => array(
        'class_name' => 'NtlContentImageGalleryMigration',
      ),
      'NtlTaxonomyCategories' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'NTL Keywords' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '5',
        'destination_vocabulary' => 'NTL Keywords',
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
//    'DeimsContentDataSet' => array('class_name' => 'NtlContentDataSetMigration'),
    'DeimsContentOrganization' => array('class_name' => 'NtlContentOrganizationMigration'),
//    'DeimsContentPerson' => array('class_name' => 'NtlContentPersonMigration'),
//    'DeimsFile' => array('class_name' => 'NtlFileMigration'),
  );
}
