package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxTimer;

/**
 * ...
 * @author ninjaMuffin
 */
class BootState extends FlxState 
{
	private var printing:FlxText;
	private var timer:Float = 4;
	
	private var bootTexts:Array<String> = ["Loading Dependancies", "Abstracting Low Level APIs","Linking graphics processor", "Compiling hard drive", "Defragging hard drive", "WARNING- HDD CORRUPTED", "Initializing Compatibility Mode", "Loading OS", "Initializing GUI"];

	override public function create():Void 
	{
		FlxG.mouse.load(AssetPaths.cursorBW__png, 2);
		FlxG.mouse.visible = false;
		
		FlxG.sound.playMusic("assets/sounds/pcAmbience.mp3");
		FlxG.sound.music.loopTime = 3500;
		
		printing = new FlxText(2, 2, 0, "FlixOS 1.8.30 \n(c) 1997-1999 Newgrounds inc. \n\"Everything, by Everyone!\" All Rights Reserved \nSource code: github.com/ninjamuffin99/PixelDayPCGame\nInitializing RAM", 8);
		add(printing);
		
		super.create();
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		if (timer > 0)
		{
			timer -= FlxG.elapsed;
		}
		else
		{
			timer += FlxG.random.float(0, 4);
			addText();
		}
		
		#if debug
		if (FlxG.keys.justPressed.ANY)
		{
			FlxG.switchState(new LoginState());
		}
		#end
		
	}
	
	private function addText():Void
	{
		if (bootTexts.length == 0)
		{
			FlxG.switchState(new LoginState());
		}
		
		printing.text += " -- Complete\n";
		printing.text += bootTexts[0];
		bootTexts.remove(bootTexts[0]);
		
	}
}