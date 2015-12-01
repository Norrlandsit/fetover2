<?php
/**
 * @file
 * test.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function test_views_default_views_alter(&$data) {
  if (isset($data['myarticles'])) {
    $data['myarticles']->display['default']->display_options['fields']['changed']['date_format'] = 'svenskt'; /* WAS: 'long' */
  }
}
