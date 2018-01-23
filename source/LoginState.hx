package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class LoginState extends FlxState 
{

	private var btnShutDown:FlxSpriteButton;
	private var btnReset:FlxSpriteButton;
	private var btnLogin:FlxSpriteButton;
	
	private var userName:FlxText;
	private var lastLogin:FlxText;
	
	private var presents:FlxText;
	
	override public function create():Void 
	{
		
		FlxG.mouse.visible = true;
		
		var bg:FlxSprite = new FlxSprite();
		bg.loadGraphic(AssetPaths.OSOTitle__png, false, 320, 240);
		add(bg);
		
		presents = new FlxText(16, 64, 0, "ninjamuffin99 presents...");
		presents.color = OSOPal.lightPink;
		add(presents);
		
		btnReset = new FlxSpriteButton(0, 0, null, function(){FlxG.switchState(new BootState()); });
		btnReset.makeGraphic(16, 16);
		add(btnReset);
		
		btnLogin = new FlxSpriteButton(200, 100, null, login);
		btnLogin.makeGraphic(64, 32, FlxColor.RED);
		add(btnLogin);
		
		userName = new FlxText(btnLogin.x, btnLogin.y, 0, "Admin", 16);
		add(userName);
		
		lastLogin = new FlxText(userName.x, userName.y + 18, 0, "last login: 09/13/1999");
		add(lastLogin);
		
		super.create();
	}
	
	private function login():Void
	{
		FlxG.camera.fade(FlxColor.BLACK, 1, false, function(){FlxG.switchState(new PlayState()); });
	}
	
}