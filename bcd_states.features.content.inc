<?php

/**
 * Implementation of hook_content_default_fields().
 */
function bcd_states_content_default_fields() {
  $fields = array();

  // Exported field: field_gmap_zoom
  $fields['state-field_gmap_zoom'] = array(
    'field_name' => 'field_gmap_zoom',
    'type_name' => 'state',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '1|1 world
2|2 continent
3|3 country - large
4|4 country - medium
5|5 country - small
6|6 state - large
7|7 state - medium
8|8 state - small
9|9 metro area
10|10 city - large
11|11 city - medium
12|12 city - small
13|13 town
14|14 street grid
15|15 street names
16|16 block
17|17 building
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '7',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Map Zoom Level',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_website
  $fields['state-field_website'] = array(
    'field_name' => 'field_website',
    'type_name' => 'state',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'value',
    'title_value' => 'visit external site',
    'enable_tokens' => 0,
    'validate_url' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Web Page',
      'weight' => '-2',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Map Zoom Level');
  t('Web Page');

  return $fields;
}
