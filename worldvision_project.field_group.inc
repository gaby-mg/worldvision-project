<?php
/**
 * @file
 * worldvision_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function worldvision_project_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_context|node|worldvision_project|form';
  $field_group->group_name = 'group_country_context';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worldvision_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contexto',
    'weight' => '5',
    'children' => array(
      0 => 'field_country_context',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_country_context|node|worldvision_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_infobox|node|worldvision_project|form';
  $field_group->group_name = 'group_country_infobox';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worldvision_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infobox',
    'weight' => '3',
    'children' => array(
      0 => 'field_child_mortality_rate',
      1 => 'field_country_capital',
      2 => 'field_country_flag',
      3 => 'field_country_population',
      4 => 'field_hiv_rate',
      5 => 'field_human_development_index',
      6 => 'field_life_expectancy',
      7 => 'field_coat_of_arms',
      8 => 'field_country_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-country-infobox field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_country_infobox|node|worldvision_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_wv_work|node|worldvision_project|form';
  $field_group->group_name = 'group_country_wv_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worldvision_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nuestro Trabajo',
    'weight' => '6',
    'children' => array(
      0 => 'field_nuestro_trabajo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_country_wv_work|node|worldvision_project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto');
  t('Infobox');
  t('Nuestro Trabajo');

  return $field_groups;
}
