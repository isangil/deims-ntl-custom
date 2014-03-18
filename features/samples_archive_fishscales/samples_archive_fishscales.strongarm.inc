<?php
/**
 * @file
 * samples_archive_fishscales.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function samples_archive_fishscales_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sample_archive_fishscales';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sample_archive_fishscales'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sample_archive_fishscales';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sample_archive_fishscales'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sample_archive_fishscales';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sample_archive_fishscales'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sample_archive_fishscales';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sample_archive_fishscales'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sample_archive_fishscales';
  $strongarm->value = '1';
  $export['node_preview_sample_archive_fishscales'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sample_archive_fishscales';
  $strongarm->value = 0;
  $export['node_submitted_sample_archive_fishscales'] = $strongarm;

  return $export;
}
