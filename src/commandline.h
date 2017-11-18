#ifndef COMMANDLINE_H
#define COMMANDLINE_H

typedef struct 
{
	char *name;
	void (*action)();
} Command;


Command *parseCommand(const char *command, Command *commands, size_t size);
void commandLine(Command *commands, size_t size);

#endif
