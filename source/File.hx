package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.FlxGraphic;
import flixel.group.FlxSpriteGroup;
import flixel.system.FlxAssets.FlxBitmapFontGraphicAsset;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.text.FlxText;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class File extends FlxSpriteGroup 
{
	public var icon:FlxSprite;
	private var fileName:FlxText;
	
	/**
	 * File template for display, graphic should be a square then it's resized to 16px
	 * @param	X
	 * @param	Y
	 * @param	iconGraphic
	 * @param	text
	 */
	public function new(X:Float, Y:Int, ?iconGraphic:FlxGraphicAsset, ?OnClick:Void->Void, text:String = "", color:FlxColor = FlxColor.RED) 
	{
		super();
		x = X;
		y = Y;
		
		icon = new FlxSpriteButton(0, 0, null, OnClick);
		if (iconGraphic != null)
		{
			icon.loadGraphic(iconGraphic);
			icon.setGraphicSize(16, 16);
			icon.updateHitbox();
		}
		
		add(icon);
		
		fileName = new FlxText(18, 2, 0, text, 8);
		fileName.color = color;
		add(fileName);
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		if (FlxG.mouse.overlaps(icon) && FlxG.mouse.pressed)
		{
			icon.y = y + 1;
		}
		else
			icon.y = y;
	}
	
}