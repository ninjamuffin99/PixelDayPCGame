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
	private var chatArray:Array<String> = [""];
	
	private var grpChat:FlxSpriteGroup;
	private var chatCutoff:Float = -100;
	
	private var chatWindow:ChatWindow;
	
	override public function create():Void
	{
		FlxG.sound.playMusic("assets/sounds/pcAmbience.mp3");
		FlxG.sound.music.loopTime = 3500;
		
		FlxG.sound.play("assets/music/757870_Denwa-wo-Kakete-.mp3", 0.7);
		
		
		chatWindow = new ChatWindow(10, 10, 200, 200, "Cache corruptor v1.0.3");
		add(chatWindow);
		
		
		grpChat = new FlxSpriteGroup();
		grpChat.x = 15;
		grpChat.y = 120;
		add(grpChat);
		
		
		
		addText();
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		if (FlxG.mouse.justPressed)
			FlxG.sound.play("assets/sounds/mouseP" + FlxG.random.int(0, 2) + ".mp3", 0.6);
		if (FlxG.mouse.justReleased)
			FlxG.sound.play(AssetPaths.mouseR__mp3, 0.6);
		
		
		if (FlxG.keys.justPressed.A)
		{
			addText();
		}
	}
	
	private function addText():Void
	{
		FlxG.sound.play("assets/sounds/message.mp3");
		
		chatArray.push(Std.string(FlxG.random.int(0, 1000)));
		
		grpChat.forEachAlive(killSprite);
		
		for (i in 0...chatArray.length)
		{
			var chatThing:GameText = new GameText(0, 10 * i, 0, chatArray[i]);
			FlxG.log.add("Chat" + chatThing.y);
			if (chatThing.y <= chatCutoff)
				chatThing.visible = false;
				
			grpChat.add(chatThing);
		}
		
		chatCutoff += 10;
		
		grpChat.y -= 10;
	}
	
	private function killSprite(s:FlxSprite):Void
	{
		s.kill();
	}
}