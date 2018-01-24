package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;

/**
 * ...
 * @author ninjaMuffin
 */
class BSOD extends FlxState 
{

	override public function create():Void 
	{
		var bg:FlxSprite = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height, OSOPal.lightPurple);
		add(bg);
		
		var bsodText:FlxText = new FlxText(0, 20, 0, "UH OH\nFlixOS HAS HIT A CRITICAL ERROR\nTHIS ERROR MAY BE UNRECOVERABLE\nPLEASE TAKE YOUR COMPUTER TO YOUR NEAREST SPECIALIST\nERROR CODE: 0XFSSFJE:EF39039F:FKD-CRITICAL", 8);
		bsodText.alignment = FlxTextAlign.CENTER;
		bsodText.screenCenter(X);
		add(bsodText);
		
		SaveData.bsod = true;
		SaveData.save();
		
		
		super.create();
	}
	
}