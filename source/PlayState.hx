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
	private var testWindow:ErrorWindow;
	private var testWin2:Window;
	
	private var taskbar:FlxSprite;
	private var grpTaskbar:FlxTypedGroup<TaskbarButton>;
	
	private var grpShortcuts:FlxTypedGroup<File>;
	
	private var clock:FlxText;
	
	override public function create():Void
	{
		FlxG.camera.fade(FlxColor.BLACK, 7, true);
		
		grpShortcuts = new FlxTypedGroup<File>();
		add(grpShortcuts);
		
		
		addShortcuts();
		
		FlxG.sound.play("assets/music/757870_Denwa-wo-Kakete-.mp3", 0.7);
		
		grpWindows = new FlxTypedGroup<Window>();
		add(grpWindows);
		
		chatWindow = new ChatWindow(10, 10, 200, 200, "Cache corruptor v1.0.3");
		grpWindows.add(chatWindow);
		
		testWindow = new ErrorWindow(50, 50, 200, 100, "WARNING");
		testWindow.updateText("WARNING: FlixOS has booted into compatibility mode due to harddrive instability. Depending on severity, some programs may not have laoded correctly");
		grpWindows.add(testWindow);
		
		testWin2 = new Window(40, 70, 100, 100, "Also a test");
		grpWindows.add(testWin2);
		
		var taskH:Int = 16;
		taskbar = new FlxSprite(0, FlxG.height - taskH);
		taskbar.makeGraphic(FlxG.width, taskH);
		add(taskbar);
		
		grpTaskbar = new FlxTypedGroup<TaskbarButton>();
		add(grpTaskbar);
		
		grpWindows.forEachAlive(initTaskBar);
		
		
		var current_date:Date = Date.now();
		clock = new FlxText(FlxG.width - 50, taskbar.y, 0, (current_date.getMonth() + 1) + "/" + current_date.getDate() + "/" + current_date.getFullYear());
		clock.color = FlxColor.BLACK;
		add(clock);
		
		//addOverlayEffects();
		
		super.create();
	}
	
	private function addShortcuts():Void
	{
		var file:File = new File(70, 70, "assets/images/twitter.png", clickTwitter, "cool");
		grpShortcuts.add(file);
		
		
		var chatShortcut:File = new File(8, 8, null, clickChat, "ChatCorruptor");
		grpShortcuts.add(chatShortcut);
		
	}
	
	private function clickTwitter():Void
	{
		FlxG.openURL("https://twitter.com/ninja_muffin99");
	}
	
	private function clickChat():Void
	{
		chatWindow.revive();
		checkMouse(chatWindow);
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
	
	var pressSteps:Int = 0;
	private function checkMouse(w:Window):Void
	{
		if (w.mousePressing)
		{
			moveWindows(w);
		}
	}
	
	private function initTaskBar(w:Window):Void
	{
		var taskButton:TaskbarButton = new TaskbarButton(17 * grpTaskbar.members.length, taskbar.y, function()
		{
			w.visible = !w.visible; 
			moveWindows(w);
		});
		grpTaskbar.add(taskButton);
	}
	
	private function moveWindows(w:Window):Void
	{
		grpWindows.members.remove(w);
		grpWindows.members.push(w);
	}
}