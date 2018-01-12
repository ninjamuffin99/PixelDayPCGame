package;

import flixel.text.FlxText;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class ErrorWindow extends Window 
{
	
	private var errorText:FlxText;

	public function new(X:Float=0, Y:Float=0, width:Int=150, height:Int=100, name:String="UNEXPECTED ERROR", color:FlxColor=0xFFFF77A8) 
	{
		super(X, Y, width, height, name, color);
		
		errorText = new FlxText(0, 0, 0, "AN UNEXPECTED ERROR HAS OCCURED", 14);
		errorText.screenCenter();
		errorText.color = title.color;
		add(errorText);
		
	}
	
}