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

                TypeMsg("\x1b[0mLOGIN: ");
                GetLine(input, INPUT_LEN);
        
                //Make input all lower case
                for(i = 0; i < INPUT_LEN; i++)
                {
                        input[i] = tolower(input[i]);
                }

                Newline();

                if(!strncmp(input, "help login", 10))
                {
                    TypeMsg("HELP NOT AVALIABLE\n\n");
                    continue;
                }
                    
                if(!strncmp(input, "help games", 10))
                {
                    TypeMsg("\'GAMES\' REFERS TO MODELS, SIMULATIONS AND GAMES WHICH HAVE TACTICAL AND STRATEGIC APPLICATIONS\n\n");
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
                    TypeMsg("IDENTIFICATION NOT RECOGNIZED BY SYSTEM\n");
                    TypeMsg("--CONNECTION TERMINATED--\n");
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
    TypeMsg("FALKEN\'S MAZE\n");
    TypeMsg("BLACK JACK\n");
    TypeMsg("GIN RUMMY\n");
    TypeMsg("HEARTS\n");
    TypeMsg("BRIDGE\n");
    TypeMsg("CHECKERS\n");
    TypeMsg("CHESS\n");
    TypeMsg("POKER\n");
    TypeMsg("FIGHTER COMBAT\n");
    TypeMsg("GUERRILLA ENGAGEMENT\n");
    TypeMsg("DESERT WARFARE\n");
    TypeMsg("AIR-TO-GROUND ACTIONS\n");
    TypeMsg("THEATERWIDE TACTICAL WARFARE\n");
    TypeMsg("THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE\n\n");
    TypeMsg("GLOBAL THERMONUCLEAR WAR\n");
    Newline();
}

void LoginSuccess()
{
        int smallDelay = 20;
        ClearScreen();

        TypeMsgFast("\n\n\n\n\n\n\n(311) 767-8739\n");
        TypeMsgFast("(311) 936-2364");
        TypeMsgFast("            PRT. STAT.                                                  CRT. DEF.");
        TypeMsgFast("           =====================================================================");
        delay(smallDelay);
        Print("$45    " + arrow_c + block_c);
        Print("456       " + arrow_c + block_c);
        Print("009       " + arrow_c + block_c);
        Print("893       " + arrow_c + arrow_c);
        Print("972       " + arrow_c + arrow_c);
        Print("315");
        delay(smallDelay);
        TypeMsgFast("PRT CON. 3.4.5 SECTRAN 9.4.3.                           PORT STAT: SD-345\n");
        delay(smallDelay);
        TypeMsgFast("(311) 699-7305\n");
        delay(smallDelay);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        delay(smallDelay);

        ClearScreen();
        TypeMsgFast("\n\n\n\n\n\n\n\n\n\n\n\n\n(321) 936-3587\n");
        delay(smallDelay);

        ClearScreen();
        TypeMsgFast("\n\n\n\n\n(311) 767-8739\n");
        delay(smallDelay);
        TypeMsgFast("\n\n\n\n\n(311) 935-2364\n");
        delay(smallDelay);
        TypeMsgFast("            PRT. STAT.                                                  CRT. DEF.\n");
        TypeMsgFast("           =====================================================================\n");
        TypeMsgFast("             3453                                                          3594\n");
        delay(smallDelay);

        ClearScreen();
        TypeMsgFast("\n\n\n\n\n(311) 767-8739\n");
        TypeMsgFast("\n\n\n\n\n(311) 935-2364\n");
        Print("            PRT. STAT.                                                  CRT. DEF.\n");
        Print(block_c + block_c + block_c + block_c + "==================================================================\n");
        Print("             3453                                                          3594");
        delay(smallDelay);
        TypeMsgFast("FSKDDSD: SDSKJ: SDFJSL:                                                            DKSJL: SKFJJ: SDKFJLF:\n");
        delay(smallDelay);
        TypeMsgFast("SYSPROC FUNCT READY               ALT NET READY\n");
        delay(smallDelay);
        TypeMsgFast("CPU AUTH RV-345-AX8               SYSCOMP STATUS: ALL PORTS ACTIVE\n");
        delay(smallDelay);
        Print("22/34534.90/3209                         " + arrow_c + arrow_c);
        Print("CVB-3904-39490\n");      
        delay(smallDelay);
        TypeMsgFast("(311) 699-7305\n");
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        delay(smallDelay);

        ClearScreen();
        delay(smallDelay);
        Print("\n\n\n\n 12934-AD-43KJ: CONTR PAK\n");
        delay(smallDelay);

        ClearScreen();
        TypeMsgFast("\n\n\n\n\n\n\n\n 45-450f9-3353           NOPR STATUS: TRAK OFF     PRON ACTIVE\n");
        delay(smallDelay);
        Print("45:45:45" + arrow_c + arrow_c);
        Print("WER: 45/29/01  XCOMP: 346345252 YCOMP: 9283U05982D ZCOMP:09823750295\n");
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        Print("" + block_c + block_c + block_c + block_c);
        delay(smallDelay);

        ClearScreen();
        Print("FL945    TK01    BM93    R601    PZ90    GJ82    FP03    ZW08    JM89\n");
        delay(smallDelay);
        Print("REF TAPCON: 43. 45342.349\n");
        delay(smallDelay);
        TypeMsgFast("SYSPROC FUNCT READY                    ALT NET READY\n");
        delay(smallDelay);
        ClearScreen();
}


void WoprChat()
{
    char input[10];
    TypeMsg("GREETINGS PROFESSOR FALKEN.\n");
    //FlushStdIn();
    GetLine(input, 10);

    TypeMsg("HOW ARE YOU FEELING TODAY?\n");
    //FlushStdIn();
    GetLine(input, 10);

    TypeMsg("EXCELLENT.");
    delay(20);
    TypeMsg(" IT'S BEEN A LONG TIME. CAN YOU EXPLAIN THE REMOVAL OF YOUR USER ACCOUNT ON 6/23/73?\n");
    //FlushStdIn();
    GetLine(input, 10);

    TypeMsg("YES THEY DO.\n");
    //FlushStdIn();
    GetLine(input, 10);

    TypeMsg("SHALL WE PLAY A GAME?\n");
    //FlushStdIn();
    GetLine(input, 10);

    TypeMsg("WOULDN'T YOU PREFER A GOOD GAME OF CHESS?\n");
    //FlushStdIn();
    GetLine(input, 10);
    TypeMsg("FINE\n");
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
        ClearScreen();
        TypeMsgFast("                                                                     .\n");
        TypeMsgFast("   __________--^-^-\\.             ____                   __----/^\\.\n");
        TypeMsgFast("|\\/.                \\__.      ___/   ||              ___/       _/._-_    .\n");
        TypeMsgFast("|                      \\.    /.     /.      __    __/          /__/   \\/^^\\\n");
        TypeMsgFast("|                       L-^-/.     /.       \\.\\_--                         \\\n");
        TypeMsgFast("|                                 /        _/                               |\n");
        TypeMsgFast("|.                               |       _/.                          __ __/\n");
        TypeMsgFast(" \\.                              /.     /                           ___/.//\n");
        TypeMsgFast("  \\__                           /      |                           /    \\/.\n");
        TypeMsgFast("     \\________         __ _____.\\.      \\_.          ____--_   /\\_ \\    \n");
        TypeMsgFast("              \\__.    /  V.    \\ \\        \\__      _/.      \\_/   //\n");
        TypeMsgFast("                 \\   /.         \\/.          \\.  _/.             //\n");
        TypeMsgFast("                  \\_/.                         \\_/             \n");
        TypeMsgFast("                                                                          \n");
        TypeMsg("           UNITED STATES                         SOVIET UNION      \n");

        TypeMsg("WHICH SIDE DO YOU WANT?\n");
        TypeMsg("   1.    UNITED STATES\n");
        TypeMsg("   2.    SOVIET UNION\n\n");
        TypeMsg("PLEASE CHOOSE ONE: ");
        //FlushStdIn();
        GetLine(input, 10);

        TypeMsg("PLEASE LIST PRIMARY TARGETS BY\nCITY AND/OR COUNTY NAME:\n");
        //FlushStdIn();
        GetLine(input, 10);

        //FlushStdIn();
        GetLine(input, 10);

        ClearScreen();
        TypeMsgFast("                                                                     .\n");
        TypeMsgFast("   __________--^-^-\\.             ____                   __----/^\\.\n");
        TypeMsgFast("|\\/.                \\__.      ___/   ||       \x1b[5m.\x1b[0m      ___/       _/._-_    .\n");
        TypeMsgFast("|                      \\.    /.     /.      __    __/          /__/   \\/^^\\\n");
        TypeMsgFast("|                       L-^-/.     /.       \\.\\_--                         \\\n");
        TypeMsgFast("|                                 /   \x1b[5m.\x1b[0m    _/                               |\n");
        TypeMsgFast("|.                               |       _/.                          __ __/\n");
        TypeMsgFast(" \\.                              /.     /                           ___/.//\n");
        TypeMsgFast("  \\__                           /      |                           /    \\/.\n");
        TypeMsgFast("     \\________         __ _____.\\.      \\_.          ____--_   /\\_ \\    \n");
        TypeMsgFast("              \\__.    /  V.    \\ \\        \\__      _/.      \\_/   //\n");
        TypeMsgFast(" \x1b[5m.\x1b[0m               \\   /.         \\/.          \\.  _/.             //\n");
        TypeMsgFast("                  \\_/.    \x1b[5m.\x1b[0m            \x1b[5m.\x1b[0m       \\_/             \n");
        TypeMsgFast("                                                                          \n");

        TypeMsgFast("TRAJECTORY HEADING  TRAJECTORY HEADING  TRAJECTORY HEADING  TRAJECTORY HEADING\n");
        TypeMsgFast("__________________  __________________  __________________  __________________  \n");
        Newline();
        TypeMsgFast("A-43453-A 482 523   C-55200-A 243 587    E-5520-A 398 984    G-5520-A 919 437\n");
        TypeMsgFast("        B 323 654           B 892 754           B \x1b[5m394 345\x1b[0m           B \x1b[5m856 813\x1b[0m\n");
        TypeMsgFast("        C \x1b[5m125 386\x1b[0m           C 374 256           C 407 340           C 095 485\n");
        TypeMsgFast("        D 768 347           D 364 867           D 251 953           D 489 794\n");
        TypeMsgFast("        E 463 284           E \x1b[5m756 542\x1b[0m           E 093 684           E\x1b[5m 093 693 \x1b[0m \n");
        //FlushStdIn();
        GetLine(input, 10);
}


