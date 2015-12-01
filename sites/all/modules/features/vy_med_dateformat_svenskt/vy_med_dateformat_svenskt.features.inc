<?php
/**
 * @file
 * vy_med_dateformat_svenskt.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vy_med_dateformat_svenskt_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
