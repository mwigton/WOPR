#include "util.h"
#include <dos.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetupUtils()
{
	time_t t;
	srand(time(&t));
}

void playTone(int hrtz)
{
#ifdef _MSC_VER
	Beep(hrtz + 2500, 30);
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
void TypeMsg(const char *msg)
{
	int i = 0;
	while(msg[i])
	{
		if(msg[i] != ' ')
		{
			playTone(RandRange(1000, 1100));
		}
		
		fflush(stdout);
		printf("%c", msg[i]);
		i++;
	}
}

// Same as TypeMsg, but beeps on spaces
void TypeWithSpaceSound(const char* msg)
{
	int i = 0;
	while(msg[i])
	{
		fflush(stdout);
		playTone(RandRange(1000, 1100));
		printf("%c", msg[i]);
		i++;
	}
}

// types msg centered on the screen, 
// hard coded macro for width of IBM screen
void TypeCenter(const char *msg)
{
	int msgLength = strLength(msg);
	int pos = (int)((CONSOLE_WIDTH - msgLength) / 2);
	printf("%.*", pos);
	TypeMsg(msg);
}

// Same as TypeMsg, but with no delay between letters
void TypeMsgFast(const char* msg)
{
	int i = 0;
	while(msg[i])
	{
		fflush(stdout);
		playToneShort(RandRange(1000, 1100));
		printf("%c", msg[i]);
		i++;
	}
}

void Print(const char *msg)
{
	printf("%s", msg);
}

void Newline()
{
	printf("%s", "\n");
}

int RandRange(int min, int max)
{
	return(rand()%(max - min) + min);
}

void ClearScreen()
{
	system("cls");
}

int strLength(const char *msg)
{
	int i = 0;
	while(msg[i] != 0)
    {
		i++;
	}

	return i;
}

void GetLine(char *msg, int length)
{
	do
	{
		fgets(msg, length, stdin);
	}while(!strcmp(msg, "\n"));
}
