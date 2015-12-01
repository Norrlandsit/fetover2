<?php
/**
 * @file
 * myarticles_view.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function myarticles_view_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_svenskt';
  $strongarm->value = 'd.m.Y - H:i';
  $export['date_format_svenskt'] = $strongarm;

  return $export;
}
