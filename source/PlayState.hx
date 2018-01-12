package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.text.FlxTypeText;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.system.frontEnds.SoundFrontEnd;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;
import flixel.util.FlxSort;
import openfl.display.BlendMode;

class PlayState extends FlxState
{
	private var grpWindows:FlxTypedGroup<Window>;
	private var chatWindow:ChatWindow;
	private var testWindow:Window;
	private var testWin2:Window;
	
	private var taskbar:FlxSprite;
	
	override public function create():Void
	{
		FlxG.camera.fade(FlxColor.BLACK, 7, true);
		
		FlxG.sound.playMusic("assets/sounds/pcAmbience.mp3");
		FlxG.sound.music.loopTime = 3500;
		
		FlxG.sound.play("assets/music/757870_Denwa-wo-Kakete-.mp3", 0.7);
		
		grpWindows = new FlxTypedGroup<Window>();
		add(grpWindows);
		
		chatWindow = new ChatWindow(10, 10, 200, 200, "Cache corruptor v1.0.3");
		grpWindows.add(chatWindow);
		
		testWindow = new Window(50, 50, 200, 200, "Test");
		grpWindows.add(testWindow);
		
		testWin2 = new Window(40, 70, 100, 100, "Also a test");
		grpWindows.add(testWin2);
		
		var errors:Int = 0;
		while (errors <= 30)
		{
			var errorMsg:ErrorWindow = new ErrorWindow(60 + (errors * 4), 60 + errors);
			grpWindows.add(errorMsg);
			
			errors += 1;
		}
		
		
		var taskH:Int = 16;
		taskbar = new FlxSprite(0, FlxG.height - taskH);
		taskbar.makeGraphic(FlxG.width, taskH);
		add(taskbar);
		
		var file:File = new File(70, 70, "assets/images/twitter.png", clickTwitter, "cool");
		add(file);
		
		//addOverlayEffects();
		
		super.create();
	}
	
	private function clickTwitter():Void
	{
		FlxG.openURL("https://twitter.com/ninja_muffin99");
	}
	
	private function addOverlayEffects():Void
	{
		var scanLines:FlxSprite;
		scanLines = new FlxSprite(0, 0);
		scanLines.loadGraphic("assets/images/scanlines08.jpg", false, 830, 552);
		/*scanLines.setGraphicSize(FlxG.width, FlxG.height);
		scanLines.updateHitbox();*/
		scanLines.blend = BlendMode.MULTIPLY;
		scanLines.alpha = 0.1;
		scanLines.ignoreDrawDebug = true;
		add(scanLines);
		
		var vig:FlxSprite;
		vig = new FlxSprite(0, 0);
		vig.loadGraphic("assets/images/vignette.png", false, 1920, 1080);
		vig.setGraphicSize(FlxG.width, FlxG.height);
		vig.updateHitbox();
		vig.blend = BlendMode.MULTIPLY;
		vig.alpha = 0.4;
		add(vig);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		grpWindows.forEachAlive(checkMouse);
		
		//grpWindows.sort(sortByZ);
		
		if (FlxG.mouse.justPressed)
			FlxG.sound.play("assets/sounds/mouseP" + FlxG.random.int(0, 2) + ".mp3", 0.6);
		if (FlxG.mouse.justReleased)
			FlxG.sound.play(AssetPaths.mouseR__mp3, 0.6);
	}
	
	private function sortByZ(Order:Int, Win1:Window, Win2:Window):Int
	{
		return FlxSort.byValues(Order, Win1.zPos, Win2.zPos);
	}
	
	var pressSteps:Int = 0;
	private function checkMouse(w:Window):Void
	{
		if (w.mousePressing)
		{
			grpWindows.members.remove(w);
			grpWindows.members.push(w);
		}
	}
	
	private function addTaskBar(w:Window):Void
	{
		/*
		var taskButton:FlxSpriteButton;
		taskButton = new FlxSpriteButton(20, taskbar.y, null, function()
		{
			if (w.visible = false)
			{
				w.visible = true;
			}
		});
		taskButton.makeGraphic(60, 16);
		add(taskButton);*/
	}
	
}