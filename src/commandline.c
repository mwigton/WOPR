#include <string.h>
#include <stdio.h>
#include "commandline.h"
#include "util.h"

Command *parseCommand(const char *command, Command *commands, size_t size)
{
    size_t i = 0;
    for(i = 0; i < size; i++)
    {
        if(!strncmp(command, commands[i].name, strlen(commands[i].name)))
        {
            return &commands[i];
        }			
    }		
    
    return NULL;
}

void commandLine(Command *commands, size_t size)
{
	char command[CONSOLE_WIDTH];
	Command *cmd = NULL;
	
	printf("C:\\");
	getLine(command, CONSOLE_WIDTH);
	cmd = parseCommand(command, commands, size);
	if(cmd)
	{
		(*cmd->action)();
		return;
	}	
	
	// TODO: confirm this is the right error message
	printLine("Bad command or file name");
	newline();
}
