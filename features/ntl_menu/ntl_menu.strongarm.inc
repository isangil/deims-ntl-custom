<?php
/**
 * @file
 * ntl_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ntl_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 253,
    2 => 251,
    3 => 250,
    4 => 249,
    5 => 245,
    6 => 241,
    7 => 127,
    8 => 126,
    9 => 125,
    10 => 124,
    11 => 123,
    12 => 122,
    13 => 121,
    14 => 117,
    15 => 112,
    16 => 63,
    17 => 62,
    18 => 61,
    19 => 60,
    20 => 59,
    21 => 58,
    22 => 56,
    23 => 44,
    24 => 42,
    25 => 31,
    26 => 30,
    27 => 29,
    28 => 27,
    29 => 24,
    30 => 23,
    31 => 22,
    32 => 21,
    33 => 15,
    34 => 14,
    35 => 13,
    36 => 12,
    37 => 11,
    38 => 8,
    39 => 7,
    40 => 6,
    41 => 5,
    42 => 3,
    43 => 2,
    44 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ntl_document_archive';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ntl_document_archive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sample_archive_phytoplankton';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sample_archive_phyto_slides';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sample_archive_phyto_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ntl_document_archive';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ntl_document_archive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sample_archive_phytoplankton';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sample_archive_phytoplankton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sample_archive_phyto_slides';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sample_archive_phyto_slides'] = $strongarm;

  return $export;
}
