<?php
/**
 * @file
 * worldvision_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function worldvision_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function worldvision_project_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function worldvision_project_node_info() {
  $items = array(
    'worldvision_project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Use <em>projects</em> for countries where <strong>World Vision</strong> is present.'),
      'has_title' => '1',
      'title_label' => t('Nombre del país'),
      'help' => '',
    ),
    'worldvision_work_area' => array(
      'name' => t('Work Area'),
      'base' => 'node_content',
      'description' => t('Use <em>work areas</em> for different <strong>works</strong> that World Vision does in any of the <em>Projects</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('El tipo de contenido <strong>Work Area</strong> tiene cuatro campos obligatorios:

<ul>
<li>Título</li>
<li>Uso: Aquí especificamos en qué lugares de nuestro sitio web aparece el área de trabajo (página de proyecto, página de niño o área privada)</li>
<li>Imagen</li>
<li>Proyecto: En qué proyecto o proyectos se realiza este área de trabajo</li>
</ul>'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
