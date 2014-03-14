<?php
/**
 * @file
 * sample_archive_dendy_samples_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sample_archive_dendy_samples_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sample_archive_dendy_samples';
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
  $export['field_bundle_settings_node__sample_archive_dendy_samples'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sample_archive_dendy_samples';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sample_archive_dendy_samples'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sample_archive_dendy_samples';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sample_archive_dendy_samples'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sample_archive_dendy_samples';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sample_archive_dendy_samples'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sample_archive_dendy_samples';
  $strongarm->value = '0';
  $export['node_preview_sample_archive_dendy_samples'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sample_archive_dendy_samples';
  $strongarm->value = 0;
  $export['node_submitted_sample_archive_dendy_samples'] = $strongarm;

  return $export;
}
