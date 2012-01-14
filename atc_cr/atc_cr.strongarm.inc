<?php
/**
 * @file
 * atc_cr.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atc_cr_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_atc_cr';
  $strongarm->value = 0;
  $export['comment_anonymous_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_atc_cr';
  $strongarm->value = '2';
  $export['comment_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_atc_cr';
  $strongarm->value = 1;
  $export['comment_default_mode_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_atc_cr';
  $strongarm->value = '50';
  $export['comment_default_per_page_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_atc_cr';
  $strongarm->value = 1;
  $export['comment_form_location_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_atc_cr';
  $strongarm->value = '1';
  $export['comment_preview_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_atc_cr';
  $strongarm->value = 0;
  $export['comment_subject_field_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_atc_cr';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_atc_cr';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_atc_cr';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_atc_cr';
  $strongarm->value = '1';
  $export['node_preview_atc_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_atc_cr';
  $strongarm->value = 1;
  $export['node_submitted_atc_cr'] = $strongarm;

  return $export;
}
