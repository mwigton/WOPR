#ifndef UTIL_H
#define UTIL_H

#define CONSOLE_WIDTH 80
#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))

#ifdef _MSC_VER
#include <Windows.h>
#define delay(millsec) Sleep(millsec)
#endif

typedef int BOOL;
#define FALSE 0
#define TRUE 1

void SetupUtils();

void playTone(int hrtz);
void wait(int millsec);

void typeMsg(const char* msg);
void typeWithSpaceSound(const char* msg);
void typeCenter(const char* msg);
void typeMsgFast(const char* msg);
void print(const char* msg);
void printLine(const char* msg);

void newline();
int randRange(int min, int max);
void clearScreen();
void getLine(char *msg, int length);
#endif
