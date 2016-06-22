<?php
/**
 * @file
 * worldvision_project.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function worldvision_project_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'worldvision_project_work_areas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Work Areas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Work Areas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'bootstrap_circle_image',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Project (field_wv_work_project) */
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['id'] = 'field_wv_work_project_nid';
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['table'] = 'field_data_field_wv_work_project';
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['field'] = 'field_wv_work_project_nid';
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_wv_work_project_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'worldvision_work_area' => 'worldvision_work_area',
  );
  /* Filter criterion: Content: Uso (field_use) */
  $handler->display->display_options['filters']['field_use_value']['id'] = 'field_use_value';
  $handler->display->display_options['filters']['field_use_value']['table'] = 'field_data_field_use';
  $handler->display->display_options['filters']['field_use_value']['field'] = 'field_use_value';
  $handler->display->display_options['filters']['field_use_value']['value'] = array(
    'worldvision_project' => 'worldvision_project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['worldvision_project_work_areas'] = array(
    t('Master'),
    t('Project Work Areas'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['worldvision_project_work_areas'] = $view;

  return $export;
}
