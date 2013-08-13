  <header>
    <div class="section clearfix">

      <h1 id="logo">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
          <?php if ($logo): ?>
            <img src="<?php print $logo; ?>" alt="<?php if ($site_name): ?><?php print $site_name; ?><?php else: ?>Home<?php endif; ?>" />
          <?php elseif ($site_name): ?>
            <?php print $site_name; ?>
          <?php else: ?>
            <?php t('Home'); ?>
          <?php endif; ?>
        </a>
      </h1>

      <?php print render($page['header']); ?>
        
    </div>
  </header> <!-- /.section, /#header -->

  <?php if ($main_menu || $secondary_menu): ?>
    <nav>
      <div class="section clearfix">
        <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
        <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
      </div>
    </nav> <!-- /.section, /#navigation -->
  <?php endif; ?>

  <?php if ($breadcrumb): ?>
    <div id="breadcrumb">
      <?php print $breadcrumb; ?>
    </div>
  <?php endif; ?>

  <?php print $messages; ?>
  
  <div id="content" class="content">
    <div class="section clearfix">
      <?php print render($page['content']); ?>
    </div>
  </div>

  <footer>
    <div class="section clearfix">
      <?php print render($page['footer']); ?>
    </div>
  </div> <!-- /.section, /#footer -->