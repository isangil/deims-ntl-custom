<?php
/**
 * @file
 * ntl_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntl_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
