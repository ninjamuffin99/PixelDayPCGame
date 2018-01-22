package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class ChatWindow extends Window 
{
	public var chatArray:Array<String> = [];
	public var textArray:Array<String> = [];
	
	private var chatCutoff:Float = -180;
	private var grpChat:FlxText;
	private var grpButtons:FlxSpriteGroup;
	
	private var erasing:Bool = false;

	public function new(X:Float=0, Y:Float=0, width:Int=200, height:Int=200, name:String="Cache Corruptor v1.0.5", color:FlxColor=0xFFFF77A8) 
	{
		super(X, Y, width, height, name, color);
		
		grpButtons = new FlxSpriteGroup();
		add(grpButtons);
		
		
		//initChat();
		
		initButtons();
		
	}
	
	private function initChat():Void
	{
		grpChat = new FlxText();
		grpChat.x = 8;
		grpChat.y = 195;
		add(grpChat);
		
		grpButtons.kill();
		
		newChat();
		addText();
	}
	
	private function initButtons():Void
	{
		grpButtons.revive();
		
		for (i in 0...ChatLogs.dates.length)
		{
			var chatNum:File;
			chatNum = new File(8, 10 * i, null, function()
			{
				initChat();
				chatArray = ChatLogs.dates[i][2];
			}, "text" + i, FlxColor.BLACK);
			grpButtons.add(chatNum);
		}
	}
	
	override public function revive():Void 
	{
		super.revive();
		
		if (textArray.length > 0)
		{
			textArray = [];
			grpChat.y = 195 + 10;
			grpChat.text = "";
		}
		
		newChat();
	}
	
	private function newChat():Void
	{
		//chatArray = ChatLogs.dates[FlxG.random.int(0, ChatLogs.dates.length)][2];
	}
	
	private var chatTimer:Float = 4;
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		
		if (FlxG.keys.justPressed.A || chatTimer <= 0)
		{
			if (chatArray.length > 0)
			{
				addText();
				chatTimer = (FlxG.random.float(chatArray[0].length, chatArray[0].length + 3) / FlxG.random.int(6, 12)) + 0.5;
			}
			
		}
		else
		{
			chatTimer -= FlxG.elapsed;
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