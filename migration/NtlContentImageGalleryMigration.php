<?php

/**
 * @file
 * Definition of NtlContentImageGalleryMigration.
 * 
 * NTL did not use the Gallery2 and field gallery modules in D6,
 * The sources are the "Image" cct.
 */

class NtlContentImageGalleryMigration extends DrupalNode6Migration {
  protected $sourceFields = array(
    'field_images' => 'Images - provided in prepare()',
  );

  protected $dependencies = array('DeimsFile');

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'image',
      'destination_type' => 'image_gallery',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    $this->addFieldMapping('field_images', 'field_images')
      ->sourceMigration('DeimsFile')
      ->description('Handled in prepareRow().');
    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

    $this->addUnmigratedSources(array(
    ));

    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:destination_dir',
      'field_images:destination_file',
      'field_images:file_replace',
      'field_images:source_dir',
      'field_images:urlencode',
      'field_images:alt',
      'field_images:title',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_keywords',
      'field_keywords:source_type',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    // Find all the "images" that are attached to this gallery node.
    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->condition('n.type', 'scientific_image');
    $query->join('content_type_scientific_image', 'ctsi', 'n.vid = ctsi.vid');
    $query->condition('ctsi.field_scientific_image_gallery_nid', $row->nid);
    $query->fields('ctsi', array('field_sci_image_fid'));
    $row->field_images = $query->execute()->fetchCol();
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
}
