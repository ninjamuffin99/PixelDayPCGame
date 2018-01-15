package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class ChatWindow extends Window 
{
	public var chatArray:Array<String> = ["hey", "hi", "how are you doing?"];
	public var textArray:Array<String> = [];
	
	private var chatCutoff:Float = -180;
	private var grpChat:FlxText;

	public function new(X:Float=0, Y:Float=0, width:Int=200, height:Int=200, name:String="Cache Corruptor v1.0.5", color:FlxColor=0xFFFF77A8) 
	{
		super(X, Y, width, height, name, color);
		
		grpChat = new FlxText();
		grpChat.x = 15;
		grpChat.y = 195;
		add(grpChat);
		
		addText();
		
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
		FlxG.sound.play("assets/sounds/message.mp3");
		textArray.push(chatArray[0]);
		chatArray.remove(chatArray[0]);
		grpChat.text = "";
		
		if (textArray.length >= 19)
		{
			textArray.remove(textArray[0]);
		}
		else
		{
			grpChat.y -= 10;
		}
		for (i in 0...textArray.length)
		{
			grpChat.text += textArray[i];
			grpChat.text += "\n";
		}
		
	}
	
}