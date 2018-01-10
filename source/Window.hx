package;

import flixel.FlxG;
import flixel.group.FlxSpriteGroup;

/**
 * ...
 * @author ninjaMuffin
 */
class Window extends FlxSpriteGroup 
{

	public function new(X:Float = 0, Y:Float = 0, ?width:Float = FlxG.width * 0.7, height:Float = FlxG.width * 0.7) 
	{
		super();
		
		x = X;
		y = Y;
		
	}
	
}