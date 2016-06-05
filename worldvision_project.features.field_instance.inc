<?php
/**
 * @file
 * worldvision_project.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function worldvision_project_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_country_context-field_country_context_icon'.
  $field_instances['field_collection_item-field_country_context-field_country_context_icon'] = array(
    'bundle' => 'field_country_context',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_country_context_icon',
    'label' => 'Icono contexto',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'png',
      'max_filesize' => '',
      'max_resolution' => '64x64',
      'min_resolution' => '32x32',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'imce_filefield_on' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_country_context-field_country_context_text'.
  $field_instances['field_collection_item-field_country_context-field_country_context_text'] = array(
    'bundle' => 'field_country_context',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_country_context_text',
    'label' => 'Texto contexto',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_nuestro_trabajo-field_wv_work_image'.
  $field_instances['field_collection_item-field_nuestro_trabajo-field_wv_work_image'] = array(
    'bundle' => 'field_nuestro_trabajo',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wv_work_image',
    'label' => 'WV Work Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'imce_filefield_on' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_nuestro_trabajo-field_wv_work_text'.
  $field_instances['field_collection_item-field_nuestro_trabajo-field_wv_work_text'] = array(
    'bundle' => 'field_nuestro_trabajo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wv_work_text',
    'label' => 'WV Work Text',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_child_day'.
  $field_instances['node-worldvision_project-field_child_day'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_child_day',
    'label' => 'Un día en la vida de un niño',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-worldvision_project-field_child_mortality_rate'.
  $field_instances['node-worldvision_project-field_child_mortality_rate'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Busca la tasa de mortalidad infantil en la página <a href="https://en.wikipedia.org/wiki/List_of_countries_by_infant_mortality_rate">Wikipedia - List of countries by infant mortality rate</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_child_mortality_rate',
    'label' => 'Tasa de mortalidad infantil',
    'required' => 1,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_coat_of_arms'.
  $field_instances['node-worldvision_project-field_coat_of_arms'] = array(
    'bundle' => 'worldvision_project',
    'deleted' => 0,
    'description' => 'Descargue la imagen correspondiente en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_coat_of_arms',
    'label' => 'Escudo',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'svg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_country_capital'.
  $field_instances['node-worldvision_project-field_country_capital'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Busca la capital en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country_capital',
    'label' => 'Capital',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_country_context'.
  $field_instances['node-worldvision_project-field_country_context'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country_context',
    'label' => 'Contexto Proyecto',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_country_flag'.
  $field_instances['node-worldvision_project-field_country_flag'] = array(
    'bundle' => 'worldvision_project',
    'deleted' => 0,
    'description' => 'Descargue la imagen correspondiente en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country_flag',
    'label' => 'Bandera',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'svg',
      'max_filesize' => '100 KB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_country_location'.
  $field_instances['node-worldvision_project-field_country_location'] = array(
    'bundle' => 'worldvision_project',
    'deleted' => 0,
    'description' => 'Descargue la imagen correspondiente en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country_location',
    'label' => 'Mapa de localización',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'svg png',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-worldvision_project-field_country_population'.
  $field_instances['node-worldvision_project-field_country_population'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Busca la población en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country_population',
    'label' => 'Población',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'habitantes',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_featured_image'.
  $field_instances['node-worldvision_project-field_featured_image'] = array(
    'bundle' => 'worldvision_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_image',
    'label' => 'Imagen destacada',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_featured_video'.
  $field_instances['node-worldvision_project-field_featured_video'] = array(
    'bundle' => 'worldvision_project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_video',
    'label' => 'Video destacado',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          0 => 0,
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_hiv_rate'.
  $field_instances['node-worldvision_project-field_hiv_rate'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hiv_rate',
    'label' => 'Tasa VIH',
    'required' => 1,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-worldvision_project-field_human_development_index'.
  $field_instances['node-worldvision_project-field_human_development_index'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_human_development_index',
    'label' => 'Índice desarrollo humano',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_life_expectancy'.
  $field_instances['node-worldvision_project-field_life_expectancy'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Busca la esperanza de vida en la página <a href="https://en.wikipedia.org/wiki/List_of_countries_by_life_expectancy">Wikipedia - List of Countries by Life Expectancy</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_life_expectancy',
    'label' => 'Esperanza de vida',
    'required' => 1,
    'settings' => array(
      'max' => 100,
      'min' => 30,
      'prefix' => '',
      'suffix' => 'años',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-worldvision_project-field_nuestro_trabajo'.
  $field_instances['node-worldvision_project-field_nuestro_trabajo'] = array(
    'bundle' => 'worldvision_project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nuestro_trabajo',
    'label' => 'Nuestro trabajo',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bandera');
  t('Busca la capital en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA.');
  t('Busca la esperanza de vida en la página <a href="https://en.wikipedia.org/wiki/List_of_countries_by_life_expectancy">Wikipedia - List of Countries by Life Expectancy</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA');
  t('Busca la población en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA.');
  t('Busca la tasa de mortalidad infantil en la página <a href="https://en.wikipedia.org/wiki/List_of_countries_by_infant_mortality_rate">Wikipedia - List of countries by infant mortality rate</a> o en <a href="https://www.cia.gov/library/publications/the-world-factbook/">The World Factbook</a> de la CIA');
  t('Capital');
  t('Contexto Proyecto');
  t('Descargue la imagen correspondiente en <a href="https://es.wikipedia.org/wiki/Wikipedia:Portada">Wikipedia</a>');
  t('Escudo');
  t('Esperanza de vida');
  t('Icono contexto');
  t('Imagen destacada');
  t('Mapa de localización');
  t('Nuestro trabajo');
  t('Población');
  t('Tasa VIH');
  t('Tasa de mortalidad infantil');
  t('Texto contexto');
  t('Un día en la vida de un niño');
  t('Video destacado');
  t('WV Work Image');
  t('WV Work Text');
  t('Índice desarrollo humano');

  return $field_instances;
}
