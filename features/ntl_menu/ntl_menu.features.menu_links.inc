<?php
/**
 * @file
 * ntl_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ntl_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:about/news
  $menu_links['main-menu:about/news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/news',
    'router_path' => 'about/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/68',
  );
  // Exported menu link: main-menu:about/sites
  $menu_links['main-menu:about/sites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/sites',
    'router_path' => 'about/sites',
    'link_title' => 'Research sites',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:biblio
  $menu_links['main-menu:biblio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'biblio',
    'router_path' => 'biblio',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:data
  $menu_links['main-menu:data'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data',
    'router_path' => 'data',
    'link_title' => 'Data',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:data/spatial_data_catalog
  $menu_links['main-menu:data/spatial_data_catalog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data/spatial_data_catalog',
    'router_path' => 'data/spatial_data_catalog',
    'link_title' => 'Spatial Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:http://ecotrends.info
  $menu_links['main-menu:http://ecotrends.info'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://ecotrends.info',
    'router_path' => '',
    'link_title' => 'EcoTrends',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:http://metacat.lternet.edu
  $menu_links['main-menu:http://metacat.lternet.edu'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://metacat.lternet.edu',
    'router_path' => '',
    'link_title' => 'LTER Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:http://www.fs.orst.edu/climhy
  $menu_links['main-menu:http://www.fs.orst.edu/climhy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.fs.orst.edu/climhy',
    'router_path' => '',
    'link_title' => 'Clymate / Hydro DB',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:node/121
  $menu_links['main-menu:node/121'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/121',
    'router_path' => 'node/%',
    'link_title' => 'Buoys',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:node/124
  $menu_links['main-menu:node/124'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/124',
    'router_path' => 'node/%',
    'link_title' => 'For the public',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/71',
  );
  // Exported menu link: main-menu:node/126
  $menu_links['main-menu:node/126'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/126',
    'router_path' => 'node/%',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'research/research_highlights',
  );
  // Exported menu link: main-menu:node/132
  $menu_links['main-menu:node/132'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/132',
    'router_path' => 'node/%',
    'link_title' => 'The Lakes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/68',
  );
  // Exported menu link: main-menu:node/133
  $menu_links['main-menu:node/133'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/133',
    'router_path' => 'node/%',
    'link_title' => 'Links',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: main-menu:node/39
  $menu_links['main-menu:node/39'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'research/research_highlights',
  );
  // Exported menu link: main-menu:node/48
  $menu_links['main-menu:node/48'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'node/68',
  );
  // Exported menu link: main-menu:node/59
  $menu_links['main-menu:node/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Facilities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/68',
  );
  // Exported menu link: main-menu:node/68
  $menu_links['main-menu:node/68'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/68',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/71
  $menu_links['main-menu:node/71'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/71',
    'router_path' => 'node/%',
    'link_title' => 'Outreach',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:node/72
  $menu_links['main-menu:node/72'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/72',
    'router_path' => 'node/%',
    'link_title' => 'For Parents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/71',
  );
  // Exported menu link: main-menu:node/73
  $menu_links['main-menu:node/73'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/73',
    'router_path' => 'node/%',
    'link_title' => 'Undergrads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'node/71',
  );
  // Exported menu link: main-menu:node/74
  $menu_links['main-menu:node/74'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/74',
    'router_path' => 'node/%',
    'link_title' => 'Courses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'node/68',
  );
  // Exported menu link: main-menu:node/75
  $menu_links['main-menu:node/75'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/75',
    'router_path' => 'node/%',
    'link_title' => 'Graduate Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'node/71',
  );
  // Exported menu link: main-menu:node/76
  $menu_links['main-menu:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'For Teachers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/71',
  );
  // Exported menu link: main-menu:node/80
  $menu_links['main-menu:node/80'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/80',
    'router_path' => 'node/%',
    'link_title' => 'Information Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/68',
  );
  // Exported menu link: main-menu:node/85
  $menu_links['main-menu:node/85'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/85',
    'router_path' => 'node/%',
    'link_title' => 'LTEArts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:node/86
  $menu_links['main-menu:node/86'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/86',
    'router_path' => 'node/%',
    'link_title' => 'Document Archive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:node/90
  $menu_links['main-menu:node/90'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/90',
    'router_path' => 'node/%',
    'link_title' => 'Paradise Lost',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/85',
  );
  // Exported menu link: main-menu:node/92
  $menu_links['main-menu:node/92'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/92',
    'router_path' => 'node/%',
    'link_title' => 'Artists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/85',
  );
  // Exported menu link: main-menu:node/93
  $menu_links['main-menu:node/93'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/93',
    'router_path' => 'node/%',
    'link_title' => 'Sample Archive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:node/99
  $menu_links['main-menu:node/99'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/99',
    'router_path' => 'node/%',
    'link_title' => 'Proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'research/research_highlights',
  );
  // Exported menu link: main-menu:people
  $menu_links['main-menu:people'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people',
    'router_path' => 'people',
    'link_title' => 'People',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:people/researchers
  $menu_links['main-menu:people/researchers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/researchers',
    'router_path' => 'people/researchers',
    'link_title' => 'Researchers',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'people',
  );
  // Exported menu link: main-menu:power-search/data-set
  $menu_links['main-menu:power-search/data-set'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'power-search/data-set',
    'router_path' => 'power-search/data-set',
    'link_title' => 'Power Search Data Set',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:research/leveraged_projects
  $menu_links['main-menu:research/leveraged_projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research/leveraged_projects',
    'router_path' => 'research/leveraged_projects',
    'link_title' => 'Related Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'research/research_highlights',
  );
  // Exported menu link: main-menu:research/projects
  $menu_links['main-menu:research/projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research/projects',
    'router_path' => 'research/projects',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'research/research_highlights',
  );
  // Exported menu link: main-menu:research/protocols
  $menu_links['main-menu:research/protocols'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research/protocols',
    'router_path' => 'research/protocols',
    'link_title' => 'Protocols',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'research/research_highlights',
  );
  // Exported menu link: main-menu:research/research_highlights
  $menu_links['main-menu:research/research_highlights'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research/research_highlights',
    'router_path' => 'research/research_highlights',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:research/transformational_science
  $menu_links['main-menu:research/transformational_science'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research/transformational_science',
    'router_path' => 'research/transformational_science',
    'link_title' => 'Transformational Science',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'research/research_highlights',
  );
  // Exported menu link: main-menu:user/login
  $menu_links['main-menu:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: main-menu:user/logout
  $menu_links['main-menu:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '21',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Artists');
  t('Buoys');
  t('Clymate / Hydro DB');
  t('Contact');
  t('Courses');
  t('Data');
  t('Document Archive');
  t('EcoTrends');
  t('Facilities');
  t('For Parents');
  t('For Teachers');
  t('For the public');
  t('Graduate Program');
  t('Information Management');
  t('LTEArts');
  t('LTER Catalog');
  t('Links');
  t('Login');
  t('Logout');
  t('News');
  t('Opportunities');
  t('Outreach');
  t('Paradise Lost');
  t('People');
  t('Power Search Data Set');
  t('Projects');
  t('Proposals');
  t('Protocols');
  t('Publications');
  t('Related Projects');
  t('Reports');
  t('Research');
  t('Research sites');
  t('Researchers');
  t('Sample Archive');
  t('Spatial Data');
  t('The Lakes');
  t('Transformational Science');
  t('Undergrads');


  return $menu_links;
}
