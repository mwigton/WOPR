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

void TypeMsg(const char *msg)
{
	int i = 0;
	while(msg[i])
	{
		if(msg[i] != ' ')
		{
			sound(RandRange(1000, 1100));
		}
		
		fflush(stdout);
		printf("%c", msg[i]);
		delay(5);
		nosound();
		i++;
	}
}

void TypeWithSpaceSound(const char* msg)
{
	int i = 0;
	while(msg[i])
	{
		fflush(stdout);
		sound(RandRange(1000, 1100));
		printf("%c", msg[i]);
		delay(5);
		nosound();
		i++;
	}
}

void TypeCenter(const char *msg)
{
	int msgLength = strLength(msg);
	int pos = (int)((CONSOLE_WIDTH - msgLength) / 2);
	printf("%.*", pos);
	TypeMsg(msg);
}

void TypeMsgFast(const char* msg)
{
	int i = 0;
	while(msg[i])
	{
		fflush(stdout);
		sound(RandRange(1000, 1100));
		printf("%c", msg[i]);
		nosound();
		i++;
	}
}

void Print(const char *msg)
{
	printf("%s", msg);
}

void FlushStdIn()
{
	//char ch;
	//while((ch = getchar()) != '\n' && ch != EOF);
}

void Delay(int milliseconds)
{
	//On the IBM, I could not find a delay lib function that works,
	//but this works correctly
	clock_t start = clock();
	while((clock() - start) * 1000/ 3000 < milliseconds){}
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
