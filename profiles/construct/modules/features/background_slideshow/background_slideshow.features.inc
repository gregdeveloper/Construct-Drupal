<?php
/**
 * @file
 * background_slideshow.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function background_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: background__1400xauto_.
  $styles['background__1400xauto_'] = array(
    'name' => 'background__1400xauto_',
    'label' => 'Background (1400xauto)',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1400,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
