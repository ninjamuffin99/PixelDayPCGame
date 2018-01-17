package;

import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class TextFile extends File 
{

	public function new(X:Float, Y:Int, ?iconGraphic:FlxGraphicAsset, ?OnClick:Void->Void, text:String="", color:FlxColor=FlxColor.RED) 
	{
		super(X, Y, iconGraphic, OnClick, text, color);
		
	}
	
}