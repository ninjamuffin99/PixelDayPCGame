package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class ChatFile extends File 
{

	public function new(X:Float, Y:Int, ?iconGraphic:FlxGraphicAsset, ?OnClick:Void->Void, text:String = "", color:FlxColor = FlxColor.RED, width:Int = 100 ) 
	{
		super(X, Y, iconGraphic, OnClick, text, color);
		
		icon.makeGraphic(width, 10);
		icon.alpha = 0.1;
		fileName.x = X;
		fileName.y = Y - 1;
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		if (FlxG.mouse.overlaps(icon))
		{
			icon.alpha = 0.5;
			fileName.alpha = 0.9;
		}
		else
		{
			fileName.alpha = 0.5;
			icon.alpha = 0.2;
		}
	}
	
}