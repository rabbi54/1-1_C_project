#include "iostream"
#include "iGraphics.h"
#include "variable.h"
//#include "pch.h"
#include "menu.h"
#include "game.h"
#include "control.h"
#include "ControlArrow.h"
#include "File.h"
#include "level.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
#define SW  1200
#define SH 600


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/

//arrow change for player 2


int main()
{

	char project_name[] = "Poject_Title";
	
	//iSetTimer(30, arrow_change_player1);
	
	//iSetTimer(100, MoveCharecter);
	fileRead();
	iSetTimer(300, l3);
	srand(time(0));
	iInitialize(SW, SH, project_name);
	///updated see the documentations
	iStart();
	//return 0;
}
