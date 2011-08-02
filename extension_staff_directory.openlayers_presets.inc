<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function extension_staff_directory_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'staff_directory_map';
  $openlayers_presets->title = 'Staff Directory Page Map';
  $openlayers_presets->description = 'The map displayed on staff directory page';
  $openlayers_presets->data = array(
    'width' => '260px',
    'height' => '180px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-120.86883544454, 43.885026702056',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-13922240.329384,5132134.952203,-12936508.412795,5856146.483991',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'staff_directory_openlayers_1' => 'staff_directory_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'staff_directory_openlayers_1',
        'point_zoom_level' => '15',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'staff_directory_openlayers_1' => 'staff_directory_openlayers_1',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(
      'staff_directory_openlayers_1' => 'staff_directory_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['staff_directory_map'] = $openlayers_presets;

  return $export;
}
