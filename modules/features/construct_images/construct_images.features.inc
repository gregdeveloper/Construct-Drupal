<?php
/**
 * @file
 * construct_images.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function construct_images_image_default_styles() {
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

  // Exported image style: banner__1400x500_.
  $styles['banner__1400x500_'] = array(
    'name' => 'banner__1400x500_',
    'label' => 'Banner (1400x500)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1400,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square__480x480_.
  $styles['square__480x480_'] = array(
    'name' => 'square__480x480_',
    'label' => 'Square (480x480)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
