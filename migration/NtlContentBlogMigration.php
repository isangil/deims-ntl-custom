<?php

/**
 * @file
 * Definition of NtlContentMetBlogMigration
 *  MIGRATE to Articles with SECTIONS tag Ntl NEWS
 *  Create basic view with block (trimmed linked titles) and page
 */

class NtlContentBlogMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'blog',
      'destination_type' => 'article',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    $this->addUnmigratedSources(array(
      'revision',
      'revision_uid',
      'log',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
    ));

    $this->addUnmigratedDestinations(array(
      'field_article_date',
      'field_article_date:timezone',
      'field_article_date:rrule',
      'field_article_date:to',
      'field_files',
      'field_files:file_class',
      'field_files:language',
      'field_files:preserve_files',
      'field_files:destination_dir',
      'field_files:destination_file',
      'field_files:file_replace',
      'field_files:source_dir',
      'field_files:urlencode',
      'field_files:description',
      'field_files:display',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_related_people',
      'field_related_publications',
      'field_section:ignore_case',
      'field_section:create_term',
      'field_ntl_keywords:ignore_case',
      'field_ntl_keywords:create_term',
    ));

   //vocabs   4 5 6 (site-cats..)
   // Site-categories term reference to field-section
    $this->addFieldMapping('field_section', '6')
      ->sourceMigration('NtlTaxonomySiteCategory');
    $this->addFieldMapping('field_section:source_type')
      ->defaultValue('tid');

   //  LTER controlled via D6 term reference  (vid=8)
    $this->addFieldMapping('field_keywords', '4')
      ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
      ->defaultValue('tid');

   //   NTL keys to section
    $this->addFieldMapping('field_ntl_keywords', '5')
      ->sourceMigration('NtlTaxonomyNtlKeywords');
    $this->addFieldMapping('field_ntl_keywords:source_type')
      ->defaultValue('tid');
   
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }

}
