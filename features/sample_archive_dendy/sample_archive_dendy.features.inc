<?php
/**
 * @file
 * sample_archive_dendy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sample_archive_dendy_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sample_archive_dendy_node_info() {
  $items = array(
    'sample_archive_dendy_samples' => array(
      'name' => t('Sample Archive Dendy Samples'),
      'base' => 'node_content',
      'description' => t('List of all dendy samples in museum'),
      'has_title' => '1',
      'title_label' => t('Sample ID'),
      'help' => '',
    ),
  );
  return $items;
}
