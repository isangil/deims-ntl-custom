<?php
/**
 * @file
 * sample_archive_zoo_plankton.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sample_archive_zoo_plankton_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sample_archive_zoo_plankton_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sample_archive_zoo_plankton_node_info() {
  $items = array(
    'ntl_sample_archive_zoop' => array(
      'name' => t('Sample Archive Zoo Plankton'),
      'base' => 'node_content',
      'description' => t('list of all zoo plankton samples in museum'),
      'has_title' => '1',
      'title_label' => t('Sample ID'),
      'help' => '',
    ),
  );
  return $items;
}
