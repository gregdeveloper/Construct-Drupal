<?php
/**
 * @file field--fences-div.tpl.php
 * Wrap each field value in the <div> element.
 *
 * @see http://developers.whatwg.org/grouping-content.html#the-div-element
 */
?>
<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>:
  </span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <h3 class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>
  </h3>
<?php endif; ?>

<?php
  $count = 0;
?>
<?php foreach ($items as $delta => $item): ?>
  <?php
    $odd_even = ($count % 2 == 0) ? 'even' : 'odd';
    $count++;
  ?>
  <div class="<?php print $classes; ?> <?php print $odd_even; ?>"<?php print $attributes; ?>>
    <?php print render($item); ?>
  </div>
<?php endforeach; ?>
