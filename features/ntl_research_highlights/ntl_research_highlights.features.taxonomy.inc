<?php
/**
 * @file
 * ntl_research_highlights.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ntl_research_highlights_taxonomy_default_vocabularies() {
  return array(
    'ntl_keywords' => array(
      'name' => 'NTL Keywords',
      'machine_name' => 'ntl_keywords',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
