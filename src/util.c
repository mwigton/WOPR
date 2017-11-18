#include "util.h"
#include <dos.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetupUtils()
{
	time_t t;
	srand((unsigned int)time(&t));
}

void playTone(int hrtz)
{
#ifdef _MSC_VER
	Beep(hrtz + 2500, 50);
#else
	sound(hrtz);
	delay(5);
	nosound();
#endif
}

void playToneShort(int hrtz)
{
#ifdef _MSC_VER
	Beep(hrtz + 2500, 5);
#else
	sound(hrtz);
	nosound();
#endif
}

// Writes out msg in a type writer effect with a 
// beeping sound to the standard output.
// Does not beep on spaces
void typeMsg(const char *msg)
{
	size_t i = 0;
	while(msg[i])
	{
		if(msg[i] != ' ')
		{
			playTone(randRange(1000, 1100));
		}

		fflush(stdout);
		putchar(msg[i]);
		i++;
	}
}

// Same as TypeMsg, but with no delay between letters
void typeMsgFast(const char* msg)
{
	size_t i = 0;
	while(msg[i])
	{
		fflush(stdout);
		playToneShort(randRange(1000, 1100));
		putchar(msg[i]);
		i++;
	}
}

// Same as TypeMsg, but beeps on spaces
void typeWithSpaceSound(const char* msg)
{
	size_t i = 0;
	while(msg[i])
	{
		playTone(randRange(1000, 1100));
		fflush(stdout);
		putchar(msg[i]);
		i++;
	}
}

// types msg centered on the screen, 
// hard coded macro for width of IBM screen
void typeCenter(const char *msg)
{
	size_t padLength = ((CONSOLE_WIDTH - strlen(msg)) / 2);
	
	size_t i = 0;
	for(i = 0; i < padLength; i++)
	{
		putchar(' ');
	}
	
	typeMsg(msg);
}

void print(const char *msg)
{
	printf("%s", msg);
}

void printLine(const char *msg)
{
	printf("%s\n", msg); 
}

void newline()
{
	putchar('\n');
}

int randRange(int min, int max)
{
	return(rand() % (max - min) + min);
}

void clearScreen()
{
	system("cls");
}

void getLine(char *msg, int length)
{
	do
	{
		fgets(msg, length, stdin);
	}while(!strcmp(msg, "\n"));
}
