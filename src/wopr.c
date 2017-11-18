#include "wopr.h"
#include "util.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <dos.h>

#define DEBUG 0
#define INPUT_LEN 15

char arrow_c = (char)(24);
char block_c = (char)(178);

int LoginWopr()
{

#ifndef DEBUG
	TypeWithSpaceSound("                                \n");
	TypeWithSpaceSound("                                               \n");
	TypeWithSpaceSound("           \n");
#endif

	for(;;)
	{
		char input[INPUT_LEN];
		int i = 0; //input lower case loop index

		typeMsg("\x1b[0mLOGIN: ");
		getLine(input, INPUT_LEN);

		//Make input all lower case
		for(i = 0; i < INPUT_LEN; i++)
		{
			input[i] = tolower(input[i]);
		}

		newline();

		if(!strncmp(input, "help login", 10))
		{
			typeMsg("HELP NOT AVALIABLE\n\n");
			continue;
		}

		if(!strncmp(input, "help games", 10))
		{
			typeMsg("\'GAMES\' REFERS TO MODELS, SIMULATIONS AND GAMES WHICH HAVE TACTICAL AND STRATEGIC APPLICATIONS\n\n");
			continue;
		}

		if(!strncmp(input, "list games", 10))
		{
			ListGames();
			continue;
		}

		if(strncmp(input, "joshua", 6))
		{
			delay(1000);
			typeMsg("IDENTIFICATION NOT RECOGNIZED BY SYSTEM\n");
			typeMsg("--CONNECTION TERMINATED--\n");
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

void ListGames()
{
	typeMsg("FALKEN\'S MAZE\n");
	typeMsg("BLACK JACK\n");
	typeMsg("GIN RUMMY\n");
	typeMsg("HEARTS\n");
	typeMsg("BRIDGE\n");
	typeMsg("CHECKERS\n");
	typeMsg("CHESS\n");
	typeMsg("POKER\n");
	typeMsg("FIGHTER COMBAT\n");
	typeMsg("GUERRILLA ENGAGEMENT\n");
	typeMsg("DESERT WARFARE\n");
	typeMsg("AIR-TO-GROUND ACTIONS\n");
	typeMsg("THEATERWIDE TACTICAL WARFARE\n");
	typeMsg("THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE\n\n");
	typeMsg("GLOBAL THERMONUCLEAR WAR\n");
	newline();
}

void LoginSuccess()
{
	int smallDelay = 20;
	clearScreen();

	typeMsgFast("\n\n\n\n\n\n\n(311) 767-8739\n");
	typeMsgFast("(311) 936-2364");
	typeMsgFast("            PRT. STAT.                                                  CRT. DEF.");
	typeMsgFast("           =====================================================================");
	delay(smallDelay);
	print("$45    " + arrow_c + block_c);
	print("456       " + arrow_c + block_c);
	print("009       " + arrow_c + block_c);
	print("893       " + arrow_c + arrow_c);
	print("972       " + arrow_c + arrow_c);
	print("315");
	delay(smallDelay);
	typeMsgFast("PRT CON. 3.4.5 SECTRAN 9.4.3.                           PORT STAT: SD-345\n");
	delay(smallDelay);
	typeMsgFast("(311) 699-7305\n");
	delay(smallDelay);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	delay(smallDelay);

	clearScreen();
	typeMsgFast("\n\n\n\n\n\n\n\n\n\n\n\n\n(321) 936-3587\n");
	delay(smallDelay);

	clearScreen();
	typeMsgFast("\n\n\n\n\n(311) 767-8739\n");
	delay(smallDelay);
	typeMsgFast("\n\n\n\n\n(311) 935-2364\n");
	delay(smallDelay);
	typeMsgFast("            PRT. STAT.                                                  CRT. DEF.\n");
	typeMsgFast("           =====================================================================\n");
	typeMsgFast("             3453                                                          3594\n");
	delay(smallDelay);

	clearScreen();
	typeMsgFast("\n\n\n\n\n(311) 767-8739\n");
	typeMsgFast("\n\n\n\n\n(311) 935-2364\n");
	print("            PRT. STAT.                                                  CRT. DEF.\n");
	print(block_c + block_c + block_c + block_c + "==================================================================\n");
	print("             3453                                                          3594");
	delay(smallDelay);
	typeMsgFast("FSKDDSD: SDSKJ: SDFJSL:                                                            DKSJL: SKFJJ: SDKFJLF:\n");
	delay(smallDelay);
	typeMsgFast("SYSPROC FUNCT READY               ALT NET READY\n");
	delay(smallDelay);
	typeMsgFast("CPU AUTH RV-345-AX8               SYSCOMP STATUS: ALL PORTS ACTIVE\n");
	delay(smallDelay);
	print("22/34534.90/3209                         " + arrow_c + arrow_c);
	print("CVB-3904-39490\n");      
	delay(smallDelay);
	typeMsgFast("(311) 699-7305\n");
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	delay(smallDelay);

	clearScreen();
	delay(smallDelay);
	print("\n\n\n\n 12934-AD-43KJ: CONTR PAK\n");
	delay(smallDelay);

	clearScreen();
	typeMsgFast("\n\n\n\n\n\n\n\n 45-450f9-3353           NOPR STATUS: TRAK OFF     PRON ACTIVE\n");
	delay(smallDelay);
	print("45:45:45" + arrow_c + arrow_c);
	print("WER: 45/29/01  XCOMP: 346345252 YCOMP: 9283U05982D ZCOMP:09823750295\n");
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	print("" + block_c + block_c + block_c + block_c);
	delay(smallDelay);

	clearScreen();
	print("FL945    TK01    BM93    R601    PZ90    GJ82    FP03    ZW08    JM89\n");
	delay(smallDelay);
	print("REF TAPCON: 43. 45342.349\n");
	delay(smallDelay);
	typeMsgFast("SYSPROC FUNCT READY                    ALT NET READY\n");
	delay(smallDelay);
	clearScreen();
}


void WoprChat()
{
	char input[10];
	typeMsg("GREETINGS PROFESSOR FALKEN.\n");
	getLine(input, 10);

	typeMsg("HOW ARE YOU FEELING TODAY?\n");
	getLine(input, 10);

	typeMsg("EXCELLENT.");
	delay(20);
	typeMsg(" IT'S BEEN A LONG TIME. CAN YOU EXPLAIN THE REMOVAL OF YOUR USER ACCOUNT ON 6/23/73?\n");
	getLine(input, 10);

	typeMsg("YES THEY DO.\n");
	getLine(input, 10);

	typeMsg("SHALL WE PLAY A GAME?\n");
	getLine(input, 10);

	typeMsg("WOULDN'T YOU PREFER A GOOD GAME OF CHESS?\n");
	getLine(input, 10);
	typeMsg("FINE\n");
}

/*      
		The ASCII Maps used were used from Franklin Wei's emulator with mods to support the 80 column screen limit and the blinking bombs.
		Thanks mate, link to his source : https ://github.com/theunamedguy/wargames/blob/master/map.h
		The map ascii graphics are licensed under the Creative Commons Attribution - ShareAlike 4.0 International License.
		To view a copy of this license, visit http ://creativecommons.org/licenses/by-sa/4.0/.
*/
void GlobalThermonuclearWar()
{
	char input[10];
	clearScreen();
	typeMsgFast("                                                                     .\n");
	typeMsgFast("   __________--^-^-\\.             ____                   __----/^\\.\n");
	typeMsgFast("|\\/.                \\__.      ___/   ||              ___/       _/._-_    .\n");
	typeMsgFast("|                      \\.    /.     /.      __    __/          /__/   \\/^^\\\n");
	typeMsgFast("|                       L-^-/.     /.       \\.\\_--                         \\\n");
	typeMsgFast("|                                 /        _/                               |\n");
	typeMsgFast("|.                               |       _/.                          __ __/\n");
	typeMsgFast(" \\.                              /.     /                           ___/.//\n");
	typeMsgFast("  \\__                           /      |                           /    \\/.\n");
	typeMsgFast("     \\________         __ _____.\\.      \\_.          ____--_   /\\_ \\    \n");
	typeMsgFast("              \\__.    /  V.    \\ \\        \\__      _/.      \\_/   //\n");
	typeMsgFast("                 \\   /.         \\/.          \\.  _/.             //\n");
	typeMsgFast("                  \\_/.                         \\_/             \n");
	typeMsgFast("                                                                          \n");
	typeMsg("           UNITED STATES                         SOVIET UNION      \n");

	typeMsg("WHICH SIDE DO YOU WANT?\n");
	typeMsg("   1.    UNITED STATES\n");
	typeMsg("   2.    SOVIET UNION\n\n");
	typeMsg("PLEASE CHOOSE ONE: ");
	getLine(input, 10);

	typeMsg("PLEASE LIST PRIMARY TARGETS BY\nCITY AND/OR COUNTY NAME:\n");
	getLine(input, 10);

	getLine(input, 10);

	clearScreen();
	typeMsgFast("                                                                     .\n");
	typeMsgFast("   __________--^-^-\\.             ____                   __----/^\\.\n");
	typeMsgFast("|\\/.                \\__.      ___/   ||       \x1b[5m.\x1b[0m      ___/       _/._-_    .\n");
	typeMsgFast("|                      \\.    /.     /.      __    __/          /__/   \\/^^\\\n");
	typeMsgFast("|                       L-^-/.     /.       \\.\\_--                         \\\n");
	typeMsgFast("|                                 /   \x1b[5m.\x1b[0m    _/                               |\n");
	typeMsgFast("|.                               |       _/.                          __ __/\n");
	typeMsgFast(" \\.                              /.     /                           ___/.//\n");
	typeMsgFast("  \\__                           /      |                           /    \\/.\n");
	typeMsgFast("     \\________         __ _____.\\.      \\_.          ____--_   /\\_ \\    \n");
	typeMsgFast("              \\__.    /  V.    \\ \\        \\__      _/.      \\_/   //\n");
	typeMsgFast(" \x1b[5m.\x1b[0m               \\   /.         \\/.          \\.  _/.             //\n");
	typeMsgFast("                  \\_/.    \x1b[5m.\x1b[0m            \x1b[5m.\x1b[0m       \\_/             \n");
	typeMsgFast("                                                                          \n");

	typeMsgFast("TRAJECTORY HEADING  TRAJECTORY HEADING  TRAJECTORY HEADING  TRAJECTORY HEADING\n");
	typeMsgFast("__________________  __________________  __________________  __________________  \n");
	newline();
	typeMsgFast("A-43453-A 482 523   C-55200-A 243 587    E-5520-A 398 984    G-5520-A 919 437\n");
	typeMsgFast("        B 323 654           B 892 754           B \x1b[5m394 345\x1b[0m           B \x1b[5m856 813\x1b[0m\n");
	typeMsgFast("        C \x1b[5m125 386\x1b[0m           C 374 256           C 407 340           C 095 485\n");
	typeMsgFast("        D 768 347           D 364 867           D 251 953           D 489 794\n");
	typeMsgFast("        E 463 284           E \x1b[5m756 542\x1b[0m           E 093 684           E\x1b[5m 093 693 \x1b[0m \n");
	getLine(input, 10);
}


