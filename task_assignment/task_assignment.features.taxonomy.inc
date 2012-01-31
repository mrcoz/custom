<?php
/**
 * @file
 * task_assignment.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function task_assignment_taxonomy_default_vocabularies() {
  return array(
    'project' => array(
      'name' => 'Project',
      'machine_name' => 'project',
      'description' => 'List of Current Projects associcated to Tasks',
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
