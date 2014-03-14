<?php
/**
 * @file
 * deims_person.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function deims_person_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'person_profile_recent_pubs' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|person|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function deims_person_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'person_profile_recent_pubs';
  $ds_field->label = 'Recent Publication';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'biblio|recent',
    'block_render' => '1',
  );
  $export['person_profile_recent_pubs'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_person_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'footer' => array(
        0 => 'person_profile_recent_pubs',
        10 => 'field_associated_biblio_author',
      ),
      'left' => array(
        1 => 'field_organization',
        2 => 'field_person_college',
        3 => 'field_person_department',
        4 => 'field_address',
        5 => 'field_email',
        6 => 'field_phone',
        7 => 'field_fax',
        8 => 'field_url',
      ),
      'right' => array(
        9 => 'field_person_image',
      ),
    ),
    'fields' => array(
      'person_profile_recent_pubs' => 'footer',
      'field_organization' => 'left',
      'field_person_college' => 'left',
      'field_person_department' => 'left',
      'field_address' => 'left',
      'field_email' => 'left',
      'field_phone' => 'left',
      'field_fax' => 'left',
      'field_url' => 'left',
      'field_person_image' => 'right',
      'field_associated_biblio_author' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|person|full'] = $ds_layout;

  return $export;
}
