<?php
/**
 * @file
 * sample_archive_zoo_plankton.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sample_archive_zoo_plankton_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ntl_sample_archive_zoop';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ntl_sample_archive_zoop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ntl_sample_archive_zoop';
  $strongarm->value = array();
  $export['menu_options_ntl_sample_archive_zoop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ntl_sample_archive_zoop';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ntl_sample_archive_zoop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ntl_sample_archive_zoop';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ntl_sample_archive_zoop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ntl_sample_archive_zoop';
  $strongarm->value = '1';
  $export['node_preview_ntl_sample_archive_zoop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ntl_sample_archive_zoop';
  $strongarm->value = 0;
  $export['node_submitted_ntl_sample_archive_zoop'] = $strongarm;

  return $export;
}
