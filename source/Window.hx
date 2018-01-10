package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxColor;

/**
 * Base Class for msic window objects. Possibly will make it so I can make simple windows that are barely interactive.
 * ...
 * @author ninjaMuffin
 */
class Window extends FlxSpriteGroup 
{
	
	private var backGround:FlxSprite;

	public function new(X:Float = 0, Y:Float = 0, width:Float = 200, height:Float = 200, color:FlxColor = FlxColor.WHITE) 
	{
		super();
		
		x = X;
		y = Y;
		
		backGround = new FlxSprite(0, 0);
		backGround.makeGraphic(Std.int(width), Std.int(height), color);
		add(backGround);
		
	}
	
}