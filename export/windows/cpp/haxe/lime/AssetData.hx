package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/chat.png", "assets/images/chat.png");
			type.set ("assets/images/chat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/cursor.png", "assets/images/cursor.png");
			type.set ("assets/images/cursor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/cursorBW.png", "assets/images/cursorBW.png");
			type.set ("assets/images/cursorBW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/exit.png", "assets/images/exit.png");
			type.set ("assets/images/exit.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/minimize.ase", "assets/images/minimize.ase");
			type.set ("assets/images/minimize.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/minimize.png", "assets/images/minimize.png");
			type.set ("assets/images/minimize.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OSOPal.ase", "assets/images/OSOPal.ase");
			type.set ("assets/images/OSOPal.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/OSOThumbNail.png", "assets/images/OSOThumbNail.png");
			type.set ("assets/images/OSOThumbNail.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OSOTitle.png", "assets/images/OSOTitle.png");
			type.set ("assets/images/OSOTitle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/scanlines08.jpg", "assets/images/scanlines08.jpg");
			type.set ("assets/images/scanlines08.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/twitter.png", "assets/images/twitter.png");
			type.set ("assets/images/twitter.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/TXT.ase", "assets/images/TXT.ase");
			type.set ("assets/images/TXT.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/TXT.png", "assets/images/TXT.png");
			type.set ("assets/images/TXT.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/vignette.png", "assets/images/vignette.png");
			type.set ("assets/images/vignette.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/bumblebee.mp3", "assets/music/bumblebee.mp3");
			type.set ("assets/music/bumblebee.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/music/Denwa-wo-Kakete-.mp3", "assets/music/Denwa-wo-Kakete-.mp3");
			type.set ("assets/music/Denwa-wo-Kakete-.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/girlCrying.mp3", "assets/sounds/girlCrying.mp3");
			type.set ("assets/sounds/girlCrying.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/message.mp3", "assets/sounds/message.mp3");
			type.set ("assets/sounds/message.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/mouse.mp3", "assets/sounds/mouse.mp3");
			type.set ("assets/sounds/mouse.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/mouseP0.mp3", "assets/sounds/mouseP0.mp3");
			type.set ("assets/sounds/mouseP0.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/mouseP1.mp3", "assets/sounds/mouseP1.mp3");
			type.set ("assets/sounds/mouseP1.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/mouseP2.mp3", "assets/sounds/mouseP2.mp3");
			type.set ("assets/sounds/mouseP2.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/mouseR.mp3", "assets/sounds/mouseR.mp3");
			type.set ("assets/sounds/mouseR.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/pcAmbience.mp3", "assets/sounds/pcAmbience.mp3");
			type.set ("assets/sounds/pcAmbience.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/box.png", "flixel/flixel-ui/img/box.png");
			type.set ("flixel/flixel-ui/img/box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button.png", "flixel/flixel-ui/img/button.png");
			type.set ("flixel/flixel-ui/img/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_down.png", "flixel/flixel-ui/img/button_arrow_down.png");
			type.set ("flixel/flixel-ui/img/button_arrow_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_left.png", "flixel/flixel-ui/img/button_arrow_left.png");
			type.set ("flixel/flixel-ui/img/button_arrow_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_right.png", "flixel/flixel-ui/img/button_arrow_right.png");
			type.set ("flixel/flixel-ui/img/button_arrow_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_up.png", "flixel/flixel-ui/img/button_arrow_up.png");
			type.set ("flixel/flixel-ui/img/button_arrow_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_thin.png", "flixel/flixel-ui/img/button_thin.png");
			type.set ("flixel/flixel-ui/img/button_thin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_toggle.png", "flixel/flixel-ui/img/button_toggle.png");
			type.set ("flixel/flixel-ui/img/button_toggle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_box.png", "flixel/flixel-ui/img/check_box.png");
			type.set ("flixel/flixel-ui/img/check_box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_mark.png", "flixel/flixel-ui/img/check_mark.png");
			type.set ("flixel/flixel-ui/img/check_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome.png", "flixel/flixel-ui/img/chrome.png");
			type.set ("flixel/flixel-ui/img/chrome.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_flat.png", "flixel/flixel-ui/img/chrome_flat.png");
			type.set ("flixel/flixel-ui/img/chrome_flat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_inset.png", "flixel/flixel-ui/img/chrome_inset.png");
			type.set ("flixel/flixel-ui/img/chrome_inset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_light.png", "flixel/flixel-ui/img/chrome_light.png");
			type.set ("flixel/flixel-ui/img/chrome_light.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/dropdown_mark.png", "flixel/flixel-ui/img/dropdown_mark.png");
			type.set ("flixel/flixel-ui/img/dropdown_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_big.png", "flixel/flixel-ui/img/finger_big.png");
			type.set ("flixel/flixel-ui/img/finger_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_small.png", "flixel/flixel-ui/img/finger_small.png");
			type.set ("flixel/flixel-ui/img/finger_small.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/hilight.png", "flixel/flixel-ui/img/hilight.png");
			type.set ("flixel/flixel-ui/img/hilight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/invis.png", "flixel/flixel-ui/img/invis.png");
			type.set ("flixel/flixel-ui/img/invis.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/minus_mark.png", "flixel/flixel-ui/img/minus_mark.png");
			type.set ("flixel/flixel-ui/img/minus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/plus_mark.png", "flixel/flixel-ui/img/plus_mark.png");
			type.set ("flixel/flixel-ui/img/plus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio.png", "flixel/flixel-ui/img/radio.png");
			type.set ("flixel/flixel-ui/img/radio.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio_dot.png", "flixel/flixel-ui/img/radio_dot.png");
			type.set ("flixel/flixel-ui/img/radio_dot.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/swatch.png", "flixel/flixel-ui/img/swatch.png");
			type.set ("flixel/flixel-ui/img/swatch.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab.png", "flixel/flixel-ui/img/tab.png");
			type.set ("flixel/flixel-ui/img/tab.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab_back.png", "flixel/flixel-ui/img/tab_back.png");
			type.set ("flixel/flixel-ui/img/tab_back.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tooltip_arrow.png", "flixel/flixel-ui/img/tooltip_arrow.png");
			type.set ("flixel/flixel-ui/img/tooltip_arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/defaults.xml", "flixel/flixel-ui/xml/defaults.xml");
			type.set ("flixel/flixel-ui/xml/defaults.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_loading_screen.xml", "flixel/flixel-ui/xml/default_loading_screen.xml");
			type.set ("flixel/flixel-ui/xml/default_loading_screen.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_popup.xml", "flixel/flixel-ui/xml/default_popup.xml");
			type.set ("flixel/flixel-ui/xml/default_popup.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
