(function($) {

  // Activate the wonky april fool's prank.
  Drupal.behaviors.d7td_wonky = {
    attach: function() {
      $(document).ready(function() { 
	$.fool('wonky'); 
      });
    }
  }
  
  
})(jQuery);

