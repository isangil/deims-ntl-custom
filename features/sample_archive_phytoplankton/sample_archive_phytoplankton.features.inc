<?php
/**
 * @file
 * sample_archive_phytoplankton.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sample_archive_phytoplankton_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sample_archive_phytoplankton_node_info() {
  $items = array(
    'sample_archive_phytoplankton' => array(
      'name' => t('Sample Archive Phytoplankton'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sample ID'),
      'help' => '',
    ),
  );
  return $items;
}
