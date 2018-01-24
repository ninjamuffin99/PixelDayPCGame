package;
import flixel.FlxG;

/**
 * ...
 * @author ninjaMuffin
 */
class SaveData 
{

	public static var bsod:Bool = false;
	
	public static function save():Void
	{
		FlxG.save.data.bsod = bsod;
		
		FlxG.save.flush();
	}
	
	public static function load():Void
	{
		bsod = FlxG.save.data.bsod;
	}
	
}