/*
This was my fisrt C program with a little C++(cout used), so excuse the awfull code :)

Emulation of main characters screen when connected to WOPR in the movie "War Games".
Running on an IBM PC XT (DOS 2.0). Written mostly in C with a little C++(cout used) with OpenWacom 16bit compilation.
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

#include <iostream>
#include <dos.h>
#include <string>
#include <ios>

#define CONSOLE_WIDTH 80
#define UP_ARROW (char)(24)
#define FULL_BLOCK (char)(178)

using namespace std;

void typeLetters(const string, float waitTime);
void type(const std::string& text);
void typeCenter(const std::string &text);
void delay(int milliseconds);
void startWarDial();
void newline();
int getrand(int min, int max);
void typeSpace(const std::string &text);
void fasttype(const std::string &text);
void type_skip(const std::string &text, bool skipSpaceSound);
bool loginWOPR();
char *strtolower(char *s);
void listgames();
void loginsuccessgfx();
void clear();
void woprchat();
void delaysmall(int time);
void globalthermonuclearwar();

int main()
{
    system("cls");
    srand(time(NULL));
    if(loginWOPR())
    {
        loginsuccessgfx();
        woprchat();
        globalthermonuclearwar();
        
    }
    return 0;
}


void delay(int milliseconds)
{
    clock_t start = clock();
    while ((clock() - start) * 1000 / 3000 < milliseconds){}
}

bool loginWOPR()
{
    typeSpace("                                \n");
    typeSpace("                                               \n");
    typeSpace("           \n");
    
    for(;;)
    {
        type("\x1b[0mLOGIN: ");
        char input[20];
        cin.getline(input, 20);
        for(int i = 0; i < 20; i++)
            input[i] = tolower(input[i]);

        newline();

        if(!strcmp(input, "help login")){
            type("HELP NOT AVALIABLE\n\n");
            continue;
        }
            
        if(!strcmp(input, "help games")){
            type("\'GAMES\' REFERS TO MODELS, SIMULATIONS AND GAMES WHICH HAVE TACTICAL AND STRATEGIC APPLICATIONS\n\n");
            continue;
        }
        
        if(!strcmp(input, "list games")){
            listgames();
            continue;
        }
               
        if(strcmp(input, "joshua")){
            delay(1000);
            type("IDENTIFICATION NOT RECOGNIZED BY SYSTEM\n");
            type("--CONNECTION TERMINATED--\n");
            return false;
        }else{
            return true;
        }
    }
}

void loginsuccessgfx()
{
    int sdelay = 20;
    clear();
    
    fasttype("\n\n\n\n\n\n\n(311) 767-8739\n");
    fasttype("(311) 936-2364");
    fasttype("            PRT. STAT.                                                  CRT. DEF.");
    fasttype("           =====================================================================");
    delay(sdelay);
    
    cout << "$45    " << UP_ARROW << UP_ARROW
         << "456        " << UP_ARROW << UP_ARROW
         << "009        " << UP_ARROW << UP_ARROW
         << "893        " << UP_ARROW << UP_ARROW
         << "972        " << UP_ARROW << UP_ARROW
         << "315";
    delay(sdelay);
    fasttype("PRT CON. 3.4.5 SECTRAN 9.4.3.                           PORT STAT: SD-345\n");
    delay(sdelay);
    fasttype("(311) 699-7305\n");
    delay(sdelay);
    cout << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK;
    delay(sdelay);
    clear();
    fasttype("\n\n\n\n\n\n\n\n\n\n\n\n\n(321) 936-3587\n");
    delay(sdelay);
    clear();
    fasttype("\n\n\n\n\n(311) 767-8739\n");
    delay(sdelay);
    fasttype("\n\n\n\n\n(311) 935-2364\n");
    delay(sdelay);
    fasttype("            PRT. STAT.                                                  CRT. DEF.\n");
    fasttype("           =====================================================================\n");
    fasttype("             3453                                                          3594\n");
    delay(sdelay);
    clear();
    fasttype("\n\n\n\n\n(311) 767-8739\n");
    fasttype("\n\n\n\n\n(311) 935-2364\n");
    cout << "            PRT. STAT.                                                  CRT. DEF.\n";
    cout << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << "==================================================================\n";
    cout << "             3453                                                          3594";
    delay(sdelay);
    fasttype("FSKDDSD: SDSKJ: SDFJSL:                                                            DKSJL: SKFJJ: SDKFJLF:\n");
    delay(sdelay);
    fasttype("SYSPROC FUNCT READY               ALT NET READY\n");
    delay(sdelay);
    fasttype("CPU AUTH RV-345-AX8               SYSCOMP STATUS: ALL PORTS ACTIVE\n");
    delay(sdelay);
    cout << "22/34534.90/3209                         " << UP_ARROW << UP_ARROW << "CVB-3904-39490\n";
    delay(sdelay);
    fasttype("(311) 699-7305\n");
    cout << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK;
    delay(sdelay);
    clear();
    delay(sdelay);
    cout << "\n\n\n\n 12934-AD-43KJ: CONTR PAK\n";
    delay(sdelay);
    clear();
    fasttype("\n\n\n\n\n\n\n\n 45-450f9-3353           NOPR STATUS: TRAK OFF     PRON ACTIVE\n");
    delay(sdelay);
    cout << "45:45:45" << UP_ARROW << UP_ARROW << "WER: 45/29/01  XCOMP: 346345252 YCOMP: 9283U05982D ZCOMP:09823750295\n";
        cout << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK
         << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK << FULL_BLOCK;
    delay(sdelay);
    clear();
    cout << "FL945    TK01    BM93    R601    PZ90    GJ82    FP03    ZW08    JM89\n";
    delay(sdelay);
    cout << "REF TAPCON: 43. 45342.349\n";
    delay(sdelay);
    fasttype("SYSPROC FUNCT READY                    ALT NET READY\n");
    delay(sdelay);
    clear();
}

void fasttype(const std::string &text)
{
    for (size_t i = 0; i < text.size(); ++i)
    {
        if(text[i] != ' ')
            sound(getrand(1000, 1100));
         
        fflush(stdout);
        cout << text[i];
        
        if(text[i] != ' ')
            nosound();
    }    
}

void woprchat()
{
    char input[10];
    type("GREETINGS PROFESSOR FALKEN.\n");
    cin.getline(input, 10);
    type("HOW ARE YOU FEELING TODAY?\n");
    cin.getline(input, 10);
    type("EXCELLENT.");
    delay(20);
    type(" IT'S BEEN A LONG TIME. CAN YOU EXPLAIN THE REMOVAL OF YOUR USER ACCOUNT ON 6/23/73?\n");
    cin.getline(input, 10);
    type("YES THEY DO.\n");
    cin.getline(input, 10);
    type("SHALL WE PLAY A GAME?\n");
    cin.getline(input, 10);
    type("WOULDN'T YOU PREFER A GOOD GAME OF CHESS?\n");
    cin.getline(input, 10);
    type("FINE\n");
}

/*	
	The ASCII Maps used were used from Franklin Wei's emulator with mods to support the 80 column screen limit and the blinking bombs.
	Thanks mate, link to his source : https ://github.com/theunamedguy/wargames/blob/master/map.h
	The map ascii graphics are licensed under the Creative Commons Attribution - ShareAlike 4.0 International License.
	To view a copy of this license, visit http ://creativecommons.org/licenses/by-sa/4.0/.
*/
void globalthermonuclearwar()
{
    clear();
    char input[10];
    fasttype("                                                                     .\n");
    fasttype("   __________--^-^-\\.             ____                   __----/^\\.\n");
    fasttype("|\\/.                \\__.      ___/   ||              ___/       _/._-_    .\n");
    fasttype("|                      \\.    /.     /.      __    __/          /__/   \\/^^\\\n");
    fasttype("|                       L-^-/.     /.       \\.\\_--                         \\\n");
    fasttype("|                                 /        _/                               |\n");
    fasttype("|.                               |       _/.                          __ __/\n");
    fasttype(" \\.                              /.     /                           ___/.//\n");
    fasttype("  \\__                           /      |                           /    \\/.\n");
    fasttype("     \\________         __ _____.\\.      \\_.          ____--_   /\\_ \\    \n");
    fasttype("              \\__.    /  V.    \\ \\        \\__      _/.      \\_/   //\n");
    fasttype("                 \\   /.         \\/.          \\.  _/.             //\n");
    fasttype("                  \\_/.                         \\_/             \n");
    fasttype("                                                                          \n");
    type("           UNITED STATES                         SOVIET UNION      \n");
    type("WHICH SIDE DO YOU WANT?\n");
    type("   1.    UNITED STATES\n");
    type("   2.    SOVIET UNION\n\n");
    type("PLEASE CHOOSE ONE: ");
    cin.getline(input, 10);

    type("PLEASE LIST PRIMARY TARGETS BY\nCITY AND/OR COUNTY NAME:\n");
    cin.getline(input, 10);
    cin.getline(input, 10);

    clear();
    fasttype("                                                                     .\n");
    fasttype("   __________--^-^-\\.             ____                   __----/^\\.\n");
    fasttype("|\\/.                \\__.      ___/   ||       \x1b[5m.\x1b[0m      ___/       _/._-_    .\n");
    fasttype("|                      \\.    /.     /.      __    __/          /__/   \\/^^\\\n");
    fasttype("|                       L-^-/.     /.       \\.\\_--                         \\\n");
    fasttype("|                                 /   \x1b[5m.\x1b[0m    _/                               |\n");
    fasttype("|.                               |       _/.                          __ __/\n");
    fasttype(" \\.                              /.     /                           ___/.//\n");
    fasttype("  \\__                           /      |                           /    \\/.\n");
    fasttype("     \\________         __ _____.\\.      \\_.          ____--_   /\\_ \\    \n");
    fasttype("              \\__.    /  V.    \\ \\        \\__      _/.      \\_/   //\n");
    fasttype(" \x1b[5m.\x1b[0m               \\   /.         \\/.          \\.  _/.             //\n");
    fasttype("                  \\_/.    \x1b[5m.\x1b[0m            \x1b[5m.\x1b[0m       \\_/             \n");
    fasttype("                                                                          \n");
    
    fasttype("TRAJECTORY HEADING  TRAJECTORY HEADING  TRAJECTORY HEADING  TRAJECTORY HEADING\n");
    fasttype("__________________  __________________  __________________  __________________  \n");
    newline();
    fasttype("A-43453-A 482 523   C-55200-A 243 587    E-5520-A 398 984    G-5520-A 919 437\n");
    fasttype("        B 323 654           B 892 754           B \x1b[5m394 345\x1b[0m           B \x1b[5m856 813\x1b[0m\n");
    fasttype("        C \x1b[5m125 386\x1b[0m           C 374 256           C 407 340           C 095 485\n");
    fasttype("        D 768 347           D 364 867           D 251 953           D 489 794\n");
    fasttype("        E 463 284           E \x1b[5m756 542\x1b[0m           E 093 684           E\x1b[5m 093 693 \x1b[0m \n");
    cin.getline(input, 10);
}



void clear()
{
    system("cls");
}

void listgames()
{
    type("FALKEN\'S MAZE\n");
    type("BLACK JACK\n");
    type("GIN RUMMY\n");
    type("HEARTS\n");
    type("BRIDGE\n");
    type("CHECKERS\n");
    type("CHESS\n");
    type("POKER\n");
    type("FIGHTER COMBAT\n");
    type("GUERRILLA ENGAGEMENT\n");
    type("DESERT WARFARE\n");
    type("AIR-TO-GROUND ACTIONS\n");
    type("THEATERWIDE TACTICAL WARFARE\n");
    type("THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE\n\n");
    type("GLOBAL THERMONUCLEAR WAR\n");
}

void startWarDial()
{
    typeCenter("TO SCAN FOR CARRIER TONES, PLEASE LIST\n");
    typeCenter("DESIRED AREA CODES AND PREFIXES\n");
    newline();
    type("AREA              AREA              AREA              AREA\n");
    type("CODE PRFX NUMBER  CODE PRFX NUMBER  CODE PRFX NUMBER  CODE PRFX NUMBER\n");
    type("______________________________________________________________________\n");
}

void newline()
{
    delay(2);
    cout << endl;
    delay(2);
}

void type_skip(const std::string &text, bool skipSpaceSound)
{
    for (size_t i = 0; i < text.size(); ++i)
    {
        if(text[i] != ' ' || !skipSpaceSound)
            sound(getrand(1000, 1100));
         
        fflush(stdout);
        cout << text[i];
        delay(5);
        
        if(text[i] != ' ' || !skipSpaceSound)
            nosound();
    }
}

void type(const std::string &text)
{
    type_skip(text, true);
}

void typeSpace(const std::string &text)
{
    type_skip(text, false);
}

void typeCenter(const std::string &text)
{
    int l = (int)text.size();
    int pos = (int)((CONSOLE_WIDTH - l) / 2);
    for (int i = 0; i < pos; i++)
        cout << " ";
        
    type(text);
}

int getrand(int min, int max)
{
    return(rand()%(max - min) + min);
}

char *strtolower(char *s)
{
    char *d = (char *)malloc(strlen(s));
    while (*s)
    {
        *d =tolower(*s);
        d++;
        s++;
    }
    return d;
}
