package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;

/**
 * Base Class for msic window objects. Possibly will make it so I can make simple windows that are barely interactive.
 * ...
 * @author ninjaMuffin
 */
class Window extends FlxSpriteGroup 
{
	public var title:FlxText;
	private var outLine:FlxSprite;
	private var topBar:FlxSprite;
	private var topBarOutline:FlxSprite;
	private var backGround:FlxSprite;
	
	private var closeButton:FlxSpriteButton;
	private var minimizeButton:FlxSpriteButton;

	public function new(X:Float = 0, Y:Float = 0, width:Int = 200, height:Int = 200, name:String = "", color:FlxColor = 0xFFFF77A8) 
	{
		super();
		
		x = X;
		y = Y;
		
		outLine = new FlxSprite( -2, -2);
		outLine.makeGraphic(Std.int(width + 4), Std.int(height + 4), color.getComplementHarmony());
		add(outLine);
		
		backGround = new FlxSprite(0, 0);
		backGround.makeGraphic(Std.int(width), Std.int(height), color);
		add(backGround);
		
		topBar = new FlxSprite(0, 0);
		topBar.makeGraphic(width, 14, color.getAnalogousHarmony().warmer);
		add(topBar);
		
		topBarOutline = new FlxSprite(0, 14);
		topBarOutline.makeGraphic(width, 1, color.getComplementHarmony());
		add(topBarOutline);
		
		title = new FlxText(2, 1, 0, name);
		title.color = color.getComplementHarmony();
		add(title);
		
		closeButton = new FlxSpriteButton(width - 12, 2, null, closeWindow);
		closeButton.makeGraphic(10, 10);
		add(closeButton);
		
		minimizeButton = new FlxSpriteButton(width - 12 - 12, 2, null, minimizeWindow);
		minimizeButton.makeGraphic(10, 10);
		add(minimizeButton);
	}
	
	private function closeWindow():Void
	{
		kill();
	}
	
	private function minimizeWindow():Void
	{
		visible = false;
	}
	
}