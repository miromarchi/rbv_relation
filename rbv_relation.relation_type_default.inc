<?php
/**
 * @file
 * rbv_relation.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function rbv_relation_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'cooperates_with';
  $relation_type->label = 'coopera con';
  $relation_type->reverse_label = 'coopera con';
  $relation_type->directional = 0;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:org',
  );
  $relation_type->target_bundles = array();
  $export['cooperates_with'] = $relation_type;

  return $export;
}
