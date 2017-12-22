<?php
/**
 * @file
 * islandora_vagrant_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function islandora_vagrant_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_book_ingest_derivatives';
  $strongarm->value = array(
    'pdf' => 'pdf',
    'image' => 'image',
    'ocr' => 'ocr',
  );
  $export['islandora_book_ingest_derivatives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_paged_content_djatoka_url';
  $strongarm->value = 'http://localhost:8080/adore-djatoka/';
  $export['islandora_paged_content_djatoka_url'] = $strongarm;

  /* This should be unset only when using Blazegraph. */
  /* Default Mulgara triplestore doesn't have full a SPARQL implementation so falls back to iTQL sometimes */
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_risearch_use_itql_when_necessary';
  $strongarm->value = 0;
  $export['islandora_risearch_use_itql_when_necessary'] = $strongarm;

  return $export;
}
