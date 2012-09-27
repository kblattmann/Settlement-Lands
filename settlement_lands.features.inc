<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function settlement_lands_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function settlement_lands_node_info() {
  $items = array(
    'fnsettlementlands' => array(
      'name' => t('First Nation Settlement Lands'),
      'module' => 'features',
      'description' => t('A single KML of all settlement lands for a single First Nation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
