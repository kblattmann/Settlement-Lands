<?php

/**
 * Implementation of hook_strongarm().
 */
function settlement_lands_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fnsettlementlands';
  $strongarm->value = 0;
  $export['comment_anonymous_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_fnsettlementlands';
  $strongarm->value = '3';
  $export['comment_controls_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fnsettlementlands';
  $strongarm->value = '4';
  $export['comment_default_mode_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_fnsettlementlands';
  $strongarm->value = '1';
  $export['comment_default_order_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fnsettlementlands';
  $strongarm->value = '50';
  $export['comment_default_per_page_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fnsettlementlands';
  $strongarm->value = '2';
  $export['comment_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fnsettlementlands';
  $strongarm->value = '0';
  $export['comment_form_location_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fnsettlementlands';
  $strongarm->value = '1';
  $export['comment_preview_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fnsettlementlands';
  $strongarm->value = '1';
  $export['comment_subject_field_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fnsettlementlands';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'comment_settings' => '3',
    'menu' => '-4',
    'attachments' => '4',
  );
  $export['content_extra_weights_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fnsettlementlands';
  $strongarm->value = '0';
  $export['language_content_type_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fnsettlementlands';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_fnsettlementlands'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fnsettlementlands';
  $strongarm->value = '1';
  $export['upload_fnsettlementlands'] = $strongarm;

  return $export;
}
