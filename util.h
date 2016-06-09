#ifndef util_h
#define util_h

#define CONSOLE_WIDTH 80

void SetupUtils();

void TypeMsg(const char* msg);
void TypeWithSpaceSound(const char* msg);
void TypeCenter(const char* msg);
void TypeMsgFast(const char* msg);
void Print(const char* msg);

void Delay(int milliseconds);
void Newline();
int RandRange(int min, int max);
void ClearScreen();
int strLength(const char *str);
void GetLine(char *msg, int length);
#endif
