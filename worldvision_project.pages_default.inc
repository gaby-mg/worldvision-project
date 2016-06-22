<?php
/**
 * @file
 * worldvision_project.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function worldvision_project_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_7181ab84-031a-4650-964d-8f0b587c1603';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Project Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'worldvision_project' => 'worldvision_project',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => array(
        'column_type' => 'col',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b434a06f-6823-40ad-b6d5-1ce1d53842a7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e83daaf3-215b-4719-911c-9a2779e2576d';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e83daaf3-215b-4719-911c-9a2779e2576d';
    $display->content['new-e83daaf3-215b-4719-911c-9a2779e2576d'] = $pane;
    $display->panels['middle'][0] = 'new-e83daaf3-215b-4719-911c-9a2779e2576d';
    $pane = new stdClass();
    $pane->pid = 'new-43fb8c7c-b932-4850-94d0-47e4ab2ad592';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-57b4dd283479dda885550fd61ca72630';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Nuestro trabajo',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43fb8c7c-b932-4850-94d0-47e4ab2ad592';
    $display->content['new-43fb8c7c-b932-4850-94d0-47e4ab2ad592'] = $pane;
    $display->panels['middle'][1] = 'new-43fb8c7c-b932-4850-94d0-47e4ab2ad592';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e83daaf3-215b-4719-911c-9a2779e2576d';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_7181ab84-031a-4650-964d-8f0b587c1603'] = $handler;

  return $export;
}
