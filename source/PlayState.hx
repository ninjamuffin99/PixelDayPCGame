package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.text.FlxTypeText;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{
	private var chatText:FlxTypeText;
	
	private var grpChat:Array<String> = [""];
	
	override public function create():Void
	{
		chatText = new FlxTypeText(0, 0, FlxG.width, "<Name>: Hey", 8);
		add(chatText);
		chatText.start(0.001);
		
		updateText();
		
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.A)
		{
			grpChat.push("Cool" + FlxG.random.int(0, 1000));
			updateText();
		}
	}
	
	private function updateText():Void
	{
		while (grpChat.length >= 5)
		{
			grpChat.remove(grpChat[0]);
		}
		
		FlxG.log.clear();
		
		for (i in 0...grpChat.length)
		{
			var chatText:String = "Whatever Int: " + i + grpChat[i];
			FlxG.log.add(chatText);	
		}
		
		
	}
}