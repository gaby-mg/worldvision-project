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
      'top' => array(
        'column_type' => 'col',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => NULL,
      'bottom' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'right' => array(
      'style' => 'default',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b434a06f-6823-40ad-b6d5-1ce1d53842a7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-43fb8c7c-b932-4850-94d0-47e4ab2ad592';
    $pane->panel = 'bottom';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '43fb8c7c-b932-4850-94d0-47e4ab2ad592';
    $display->content['new-43fb8c7c-b932-4850-94d0-47e4ab2ad592'] = $pane;
    $display->panels['bottom'][0] = 'new-43fb8c7c-b932-4850-94d0-47e4ab2ad592';
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
    $pane->pid = 'new-7e6eb515-fd43-41bc-89a6-ab272c109cfe';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<table><tr><td><img alt="" class="svg-img size- img-responsive" data-="" src="%node:field_country_flag" typeof="foaf:Image"></td><td><img alt="" class="svg-img size- img-responsive" data-="" src="%node:field_coat_of_arms" typeof="foaf:Image"></td></tr></table>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e6eb515-fd43-41bc-89a6-ab272c109cfe';
    $display->content['new-7e6eb515-fd43-41bc-89a6-ab272c109cfe'] = $pane;
    $display->panels['right'][0] = 'new-7e6eb515-fd43-41bc-89a6-ab272c109cfe';
    $pane = new stdClass();
    $pane->pid = 'new-c3c952f3-b86e-4d54-9488-b905ad8ecd49';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_country_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'wrapper_tag' => 'figure',
        'classes' => '',
        'add_script' => 1,
        'file_view_mode' => 'default',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c3c952f3-b86e-4d54-9488-b905ad8ecd49';
    $display->content['new-c3c952f3-b86e-4d54-9488-b905ad8ecd49'] = $pane;
    $display->panels['right'][1] = 'new-c3c952f3-b86e-4d54-9488-b905ad8ecd49';
    $pane = new stdClass();
    $pane->pid = 'new-fcfe24b1-5af7-434b-9998-272e516a28e5';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_country_capital';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fcfe24b1-5af7-434b-9998-272e516a28e5';
    $display->content['new-fcfe24b1-5af7-434b-9998-272e516a28e5'] = $pane;
    $display->panels['right'][2] = 'new-fcfe24b1-5af7-434b-9998-272e516a28e5';
    $pane = new stdClass();
    $pane->pid = 'new-dcdab3ed-e0bd-4b92-89f5-d2bcbb58c36b';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_country_population';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dcdab3ed-e0bd-4b92-89f5-d2bcbb58c36b';
    $display->content['new-dcdab3ed-e0bd-4b92-89f5-d2bcbb58c36b'] = $pane;
    $display->panels['right'][3] = 'new-dcdab3ed-e0bd-4b92-89f5-d2bcbb58c36b';
    $pane = new stdClass();
    $pane->pid = 'new-15d86dce-17a6-4f7b-a2fb-29371a37dd72';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_life_expectancy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '15d86dce-17a6-4f7b-a2fb-29371a37dd72';
    $display->content['new-15d86dce-17a6-4f7b-a2fb-29371a37dd72'] = $pane;
    $display->panels['right'][4] = 'new-15d86dce-17a6-4f7b-a2fb-29371a37dd72';
    $pane = new stdClass();
    $pane->pid = 'new-d797ff30-dcd9-4fd4-8772-09b29f7fa176';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_child_mortality_rate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd797ff30-dcd9-4fd4-8772-09b29f7fa176';
    $display->content['new-d797ff30-dcd9-4fd4-8772-09b29f7fa176'] = $pane;
    $display->panels['right'][5] = 'new-d797ff30-dcd9-4fd4-8772-09b29f7fa176';
    $pane = new stdClass();
    $pane->pid = 'new-f2d381d9-f24f-47c0-a660-cc07a3dc1f5a';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hiv_rate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f2d381d9-f24f-47c0-a660-cc07a3dc1f5a';
    $display->content['new-f2d381d9-f24f-47c0-a660-cc07a3dc1f5a'] = $pane;
    $display->panels['right'][6] = 'new-f2d381d9-f24f-47c0-a660-cc07a3dc1f5a';
    $pane = new stdClass();
    $pane->pid = 'new-ecce4125-1232-4e13-93a4-fe11f1ab991d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_human_development_index';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'ecce4125-1232-4e13-93a4-fe11f1ab991d';
    $display->content['new-ecce4125-1232-4e13-93a4-fe11f1ab991d'] = $pane;
    $display->panels['right'][7] = 'new-ecce4125-1232-4e13-93a4-fe11f1ab991d';
    $pane = new stdClass();
    $pane->pid = 'new-1ce6ecd8-5af0-4649-af7e-2ba512182e1b';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-wv_child_slider-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '1ce6ecd8-5af0-4649-af7e-2ba512182e1b';
    $display->content['new-1ce6ecd8-5af0-4649-af7e-2ba512182e1b'] = $pane;
    $display->panels['right'][8] = 'new-1ce6ecd8-5af0-4649-af7e-2ba512182e1b';
    $pane = new stdClass();
    $pane->pid = 'new-aad81199-a3eb-4309-870a-480ed053346f';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => 'col-xs-12',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aad81199-a3eb-4309-870a-480ed053346f';
    $display->content['new-aad81199-a3eb-4309-870a-480ed053346f'] = $pane;
    $display->panels['top'][0] = 'new-aad81199-a3eb-4309-870a-480ed053346f';
    $pane = new stdClass();
    $pane->pid = 'new-e84f5cb2-bba7-48e4-99b3-f66897ff1e41';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'featured',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e84f5cb2-bba7-48e4-99b3-f66897ff1e41';
    $display->content['new-e84f5cb2-bba7-48e4-99b3-f66897ff1e41'] = $pane;
    $display->panels['top'][1] = 'new-e84f5cb2-bba7-48e4-99b3-f66897ff1e41';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e83daaf3-215b-4719-911c-9a2779e2576d';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_7181ab84-031a-4650-964d-8f0b587c1603'] = $handler;

  return $export;
}
