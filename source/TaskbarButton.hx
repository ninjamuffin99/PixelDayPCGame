package;

import flixel.group.FlxSpriteGroup;
import flixel.ui.FlxSpriteButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class TaskbarButton extends FlxSpriteGroup 
{
	private var taskBtn:FlxSpriteButton;

	public function new(X:Float = 0, Y:Float = 0, maxButton:Void->Void) 
	{
		super();
		x = X;
		y = Y;
		
		taskBtn = new FlxSpriteButton(0, 0, null, maxButton);
		taskBtn.makeGraphic(16, 16, FlxColor.RED);
		add(taskBtn);
	}
	
}