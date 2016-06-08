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
  $field_group->parent_name = 'group_country_public_data';
  $field_group->data = array(
    'label' => 'Contexto',
    'weight' => '6',
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
  $field_group->identifier = 'group_country_data|node|worldvision_project|form';
  $field_group->group_name = 'group_country_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worldvision_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos proyecto',
    'weight' => '0',
    'children' => array(
      0 => 'group_country_public_data',
      1 => 'group_country_private_data',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-country-data field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_country_data|node|worldvision_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_infobox|node|worldvision_project|form';
  $field_group->group_name = 'group_country_infobox';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worldvision_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_country_public_data';
  $field_group->data = array(
    'label' => 'Infobox',
    'weight' => '4',
    'children' => array(
      0 => 'field_child_mortality_rate',
      1 => 'field_country_capital',
      2 => 'field_country_population',
      3 => 'field_hiv_rate',
      4 => 'field_human_development_index',
      5 => 'field_life_expectancy',
      6 => 'field_country_flag',
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
  $field_group->identifier = 'group_country_private_data|node|worldvision_project|form';
  $field_group->group_name = 'group_country_private_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worldvision_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_country_data';
  $field_group->data = array(
    'label' => 'Área privada',
    'weight' => '2',
    'children' => array(
      0 => 'field_featured_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Área privada',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-country-private-data field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_country_private_data|node|worldvision_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_public_data|node|worldvision_project|form';
  $field_group->group_name = 'group_country_public_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worldvision_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_country_data';
  $field_group->data = array(
    'label' => 'Datos públicos',
    'weight' => '1',
    'children' => array(
      0 => 'field_child_day',
      1 => 'field_featured_image',
      2 => 'title',
      3 => 'group_country_infobox',
      4 => 'group_country_context',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-country-public-data field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_country_public_data|node|worldvision_project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto');
  t('Datos proyecto');
  t('Datos públicos');
  t('Infobox');
  t('Área privada');

  return $field_groups;
}
