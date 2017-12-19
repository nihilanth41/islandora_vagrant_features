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
  $strongarm->name = 'islandora_openseadragon_djatoka_url';
  $strongarm->value = 'http://localhost:8000/adore-djatoka/resolver';
  $export['islandora_openseadragon_djatoka_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_paged_content_djatoka_url';
  $strongarm->value = 'http://localhost:8000/adore-djatoka/';
  $export['islandora_paged_content_djatoka_url'] = $strongarm;

  return $export;
}
