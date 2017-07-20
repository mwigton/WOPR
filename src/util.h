#ifndef util_h
#define util_h

#define CONSOLE_WIDTH 80

#ifdef _MSC_VER
#include <Windows.h>
#define delay(millsec) Sleep(millsec)
#endif

void SetupUtils();

void playTone(int hrtz);
void wait(int millsec);

void TypeMsg(const char* msg);
void TypeWithSpaceSound(const char* msg);
void TypeCenter(const char* msg);
void TypeMsgFast(const char* msg);
void Print(const char* msg);

void Newline();
int RandRange(int min, int max);
void ClearScreen();
int strLength(const char *str);
void GetLine(char *msg, int length);
#endif
