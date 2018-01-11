package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.text.FlxTypeText;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.system.frontEnds.SoundFrontEnd;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{
	
	
	private var grpWindows:FlxTypedGroup<Window>;
	private var chatWindow:ChatWindow;
	
	override public function create():Void
	{
		FlxG.sound.playMusic("assets/sounds/pcAmbience.mp3");
		FlxG.sound.music.loopTime = 3500;
		
		FlxG.sound.play("assets/music/757870_Denwa-wo-Kakete-.mp3", 0.7);
		
		grpWindows = new FlxTypedGroup<Window>();
		add(grpWindows);
		
		chatWindow = new ChatWindow(10, 10, 200, 200, "Cache corruptor v1.0.3");
		grpWindows.add(chatWindow);
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		if (FlxG.mouse.justPressed)
			FlxG.sound.play("assets/sounds/mouseP" + FlxG.random.int(0, 2) + ".mp3", 0.6);
		if (FlxG.mouse.justReleased)
			FlxG.sound.play(AssetPaths.mouseR__mp3, 0.6);
	}
	
	
}