#include "util.h"
#include "wardial.h"
#include <stdio.h>
#include <ctype.h>

void wardialExecute()
{
	char command[CONSOLE_WIDTH];

	printWardialHeader();
	getLine(command, CONSOLE_WIDTH);
}

void getPhoneNumber()
{
	char areaCode = 0;
	int number = 0;
	char c = 0;

	while (1)
	{
		c = getchar();
		if (isdigit(c))
		{
			// TODO	
		}
	}
}

void printWardialHeader()
{
	typeCenter("TO SCAN FOR CARRIER TONES, PLEASE LIST\n");
	typeCenter("DESIRED AREA CODES AND PREFIXES\n\n");
	
	typeMsgFast("AREA                AREA                AREA                AREA\n");
	typeMsgFast("CODE PREFIX NUMBER  CODE PREFIX NUMBER  CODE PREFIX NUMBER  CODE PREFIX NUMBER\n");	
	typeMsgFast("______________________________________________________________________________\n");	
}
