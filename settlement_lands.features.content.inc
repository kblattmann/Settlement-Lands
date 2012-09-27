<?php

/**
 * Implementation of hook_content_default_fields().
 */
function settlement_lands_content_default_fields() {
  $fields = array();

  // Exported field: field_fnsl_firstnation
  $fields['fnsettlementlands-field_fnsl_firstnation'] = array(
    'field_name' => 'field_fnsl_firstnation',
    'type_name' => 'fnsettlementlands',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Kluane',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Ta\'an Kwachan Council',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Nation',
      'weight' => '-3',
      'description' => 'Select the First Nation for the settlement land file.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fnsl_kml
  $fields['fnsettlementlands-field_fnsl_kml'] = array(
    'field_name' => 'field_fnsl_kml',
    'type_name' => 'fnsettlementlands',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'kml',
      'file_path' => 'user_uploads/sl_parcel',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Settlment Land KML',
      'weight' => '-2',
      'description' => 'The KML for this First Nation.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('First Nation');
  t('Settlment Land KML');

  return $fields;
}
