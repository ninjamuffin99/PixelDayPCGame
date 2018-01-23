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
	public var chatArray:Array<String> = [""];
	public var textArray:Array<String> = [];
	
	private var chatCutoff:Float = -180;
	private var grpChat:FlxText;
	private var grpButtons:FlxSpriteGroup;
	
	private var erasing:Bool = false;

	public function new(X:Float=0, Y:Float=0, width:Int=200, height:Int=200, name:String="Cache Corruptor v1.0.5", color:FlxColor = FlxColor.BLACK) 
	{
		super(X, Y, width, height, name, color);
		
		grpButtons = new FlxSpriteGroup();
		add(grpButtons);
		
		grpChat = new FlxText();
		grpChat.x = 8;
		grpChat.y = 195;
		grpChat.color = OSOPal.lightPink;
		add(grpChat);
		
		for (i in 0...ChatLogs.dates.length)
		{
			//gets the first value in the Chatlogs.dates array, then uses it to use a Month from the MonthArray.months
			//then adds the second value to get the date
			var dateText:String = MonthArray.months[ChatLogs.dates[i][0]] + " " + ChatLogs.dates[i][1];
			
			var chatNum:ChatFile;
			chatNum = new ChatFile(8, (11 * i) + 18, null, function()
			{
				initChat();
				chatArray = ChatLogs.dates[i][2];
				grpButtons.remove(chatNum);
			}, dateText, FlxColor.BLACK, width - 16);
			
			grpButtons.add(chatNum);
		}
		
		var specialThanks:ChatFile;
		specialThanks = new ChatFile(8, (11 * ChatLogs.dates.length) + 18, null, function()
		{
			initChat();
			chatArray = ChatLogs.specialThanks[1];
		}, "Special Thanks", FlxColor.BLACK, width - 16);
		grpButtons.add(specialThanks);
		
		initButtons();
	}
	
	private function initChat():Void
	{
		grpChat.revive();
		grpButtons.kill();
		
		newChat();
		addText();
	}
	
	private function initButtons():Void
	{
		grpButtons.revive();
		grpChat.kill();
	}
	
	override public function revive():Void 
	{
		super.revive();
		newChat();
		initButtons();
	}
	
	private function newChat():Void
	{
		if (textArray.length > 0)
		{
			textArray = [];
			grpChat.y = 195 + 10;
			grpChat.text = "";
		}
	}
	
	private var chatTimer:Float = 4;
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		
		if (chatTimer <= 0 || FlxG.keys.anyJustPressed(["SPACE", "A", "UP", "W"]))
		{
			if (chatArray.length > 0)
			{
				addText();
				chatTimer = (FlxG.random.float(chatArray[0].length, chatArray[0].length + 3) / FlxG.random.int(6, 12)) + 0.5;
			}
			else
			{
				initButtons();
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