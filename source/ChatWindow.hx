package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class ChatWindow extends Window 
{
	public var chatArray:Array<String> = [""];
	
	private var chatCutoff:Float = -180;
	private var grpChat:FlxSpriteGroup;

	public function new(X:Float=0, Y:Float=0, width:Int=200, height:Int=200, name:String="Cache Corruptor v1.0.5", color:FlxColor=0xFFFF77A8) 
	{
		super(X, Y, width, height, name, color);
		
		grpChat = new FlxSpriteGroup();
		grpChat.x = 15;
		grpChat.y = 190;
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