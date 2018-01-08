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

#include <stdio.h>
#include "main.h"
#include "wopr.h"
#include "util.h"
#include "wardial.h"
#include "commandline.h"

#include <signal.h>

Command commands[] = 
{
        { "dir", FALSE, &dirCmd },
        { "wopr", TRUE, &woprCmd },
        { "wardial", TRUE, &wardial }
};

void dirCmd()
{
        int i = 0;
        for (i = 0; i < ARRAY_SIZE(commands); i++)
        {
                if (commands[i].displayList == TRUE)
                {
                        printLine(commands[i].name);
                }
        }

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

void wardial()
{
        wardialExecute();
}

void dummySignalHandler(int value)
{

}

int main()
{
        signal(SIGINT, dummySignalHandler);
        signal(SIGTERM, dummySignalHandler);
        signal(SIGBREAK, dummySignalHandler);
        signal(SIGABRT, dummySignalHandler);
        
        SetupUtils();
        clearScreen();

        while(1)
        {
                commandLine(commands, ARRAY_SIZE(commands));
        }
        
        return 0;
}

