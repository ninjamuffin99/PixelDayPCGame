package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.text.FlxTypeText;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{
	private var chatArray:Array<String> = [""];
	
	private var grpChat:FlxSpriteGroup;
	private var chatCutoff:Float = -30;
	
	private var window:Window;
	
	override public function create():Void
	{
		
		window = new Window(10, 10);
		add(window);
		
		
		grpChat = new FlxSpriteGroup();
		grpChat.y = 100;
		add(grpChat);
		
		
		
		addText();
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.A)
		{
			addText();
		}
	}
	
	private function addText():Void
	{
		chatArray.push(Std.string(FlxG.random.int(0, 1000)));
		
		grpChat.forEachAlive(killSprite);
		
		for (i in 0...chatArray.length)
		{
			var chatThing:FlxText = new FlxText(0, 10 * i, 0, chatArray[i]);
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