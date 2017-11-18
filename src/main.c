/*
Emulation of main characters screen when connected to WOPR in the movie "War Games".
Running on an IBM PC XT (DOS 2.0). C with OpenWacom 16bit compilation.
This project was done for the Cold War Museum in Warrenton, VA. it is on display on the second floor.

Copyright (C) <2015>  <Michael Wigton>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "wopr.h"
#include "util.h"
#include "wardial.h"
#include <stdio.h>
#include "commandline.h"

void dirCmd()
{
	printLine("wardial");
	printLine("dial");
	newline();
}

void woprCmd()
{
	if(LoginWopr())
	{
		LoginSuccess();
		WoprChat();
		GlobalThermonuclearWar();
	}	
}

int main()
{
	SetupUtils();
	clearScreen();
	
	Command commands[] = 
	{
		{ "dir", &dirCmd },
		{ "wopr", &woprCmd }
	};
	
	while(1)
	{
		commandLine(commands, ARRAY_SIZE(commands));
	}
	
	return 0;
}
