<?php
/**
 * @file
 * samples_archive_fishscales.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function samples_archive_fishscales_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function samples_archive_fishscales_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function samples_archive_fishscales_node_info() {
  $items = array(
    'sample_archive_fishscales' => array(
      'name' => t('Sample Archive Fishscales'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sample ID'),
      'help' => '',
    ),
  );
  return $items;
}
