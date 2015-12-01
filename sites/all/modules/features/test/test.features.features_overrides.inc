<?php
/**
 * @file
 * test.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function test_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.myarticles.display|default|display_options|fields|changed|date_format"] = 'svenskt';

 return $overrides;
}
