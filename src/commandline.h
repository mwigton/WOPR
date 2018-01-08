#ifndef COMMANDLINE_H
#define COMMANDLINE_H

#include "util.h"

typedef struct 
{
	char *name;
	BOOL displayList;
	void (*action)();
} Command;


Command *parseCommand(const char *command, Command *commands, size_t size);
void commandLine(Command *commands, size_t size);

#endif
