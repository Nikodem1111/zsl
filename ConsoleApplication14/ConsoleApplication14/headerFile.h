#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <iostream>
#include <cstdlib>

extern double history[6];
extern char units[6];
extern int dataCounter;


void Menu();
float FtoC(float stopnie);
float FtoK(float stopnie);
float CtoF(float stopnie);
float CtoK(float stopnie);
float KtoC(float stopnie);
float KtoF(float stopnie);
int check(float temp, char stopnie);
void clear();
void showHistory();

#endif
