<header id="header">
  <div class="section">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <?php print render($page['header']); ?>

  </div>
</header> <!-- /.section, /#header -->

<?php if ($main_menu || $secondary_menu): ?>
  <nav id="navigation">
    <div class="section">
      <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
      <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
    </div>
  </nav> <!-- /.section, /#navigation -->
<?php endif; ?>

<?php if ($page['slider']): ?>
<div id="slider" class="slider">
  <div class="section">
    <?php print render($page['slider']); ?>
  </div>
</div>
<?php endif; ?>

<?php if ($page['featured']): ?>
<div id="featured" class="featured">
  <div class="section">
    <?php print render($page['featured']); ?>
  </div>
</div>
<?php endif; ?>

<?php if ($breadcrumb): ?>
  <div id="breadcrumb">
    <?php print $breadcrumb; ?>
  </div>
<?php endif; ?>

<?php print $messages; ?>

<div id="content" class="content" role="main">
  <div class="section">
    <?php print render($page['content']); ?>
  </div>
</div>

<footer id="footer">
  <div class="section">
    <?php print render($page['footer']); ?>
  </div>
</footer> <!-- /.section, /#footer -->

<?php print render($page['bottom']); ?>