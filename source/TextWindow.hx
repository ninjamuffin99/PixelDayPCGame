package;

import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class TextWindow extends Window 
{

	public function new(X:Float=0, Y:Float=0, width:Int=200, height:Int=200, name:String="", color:FlxColor=0xFFFF77A8) 
	{
		super(X, Y, width, height, name + ".txt", color);
		
	}
	
}