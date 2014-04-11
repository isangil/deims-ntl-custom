Ntl Menu will not work as you expect -- all menu links pointing to nodes 
will likely dissapear.  Thus, the hierarchical structure will be in dissarray
and some links will be missing. On a positive note, this will save you
the work of creating links to static links.  Also, the node links are
fairly easy to recreate, as the pathauto works wonderfully.

Important - for improved results, apply patch
https://drupal.org/files/issues/features_menu_links_revert_missing_parent.diff
to the features contrib module (features/includes/features.menu.inc), you
may have to do it manually, since patch is for 2.x and we are using
featuers 1.x -- code is the same in the area of interest.
