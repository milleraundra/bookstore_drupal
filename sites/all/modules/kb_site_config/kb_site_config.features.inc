<?php
/**
 * @file
 * kb_site_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kb_site_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
