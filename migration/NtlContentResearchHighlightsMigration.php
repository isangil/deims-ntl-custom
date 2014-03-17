<?php
/**
* @file
* Definition of NtlContentResearchHighlightMigration
*/
class NtlContentResearchHighlightsMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'research_highlight',
      'destination_type' => 'research_highlight',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);


// migrate term relationships. there might be another family, Tags. check

    $this->addFieldMapping('field_keywords', '4')
       ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
       ->defaultValue('tid');

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
