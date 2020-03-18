<?php
/**
* @file
* Farm area hooks - to add the new field types
*/
function farm_vhffieldtypes_farm_area_type_info(){
  return array(
    'pasture'=> array(
      'label' => t('Pasture'),
      'style' => 'darkgreen',
      'weight' => 5,
      'dashboard_metric' => TRUE,
    ),
    'garden' => array(
      'label' => t('Garden'),
      'style' => 'yellow',
      'weight' => 0,
    ),
  );
}
