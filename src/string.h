#ifndef STRING_H
#define STRING_H
#include <stdlib.h>
#include <stdio.h>
char* string();
int slen(char* str);
void saddc(char* dstr,char c);
void scat(char* dstr,char* s);
void sdel(char* dstr,int pos);
void scpy(char* dstr,char* s);
void scpyn(char* dstr,char* s,int n);
void ssub(char* dstr,int pos);
void ssubn(char* dstr,int pos,int n);
int sfind(char* dstr,char* s);
int scmp(char* dstr,char* dstr2);
void sclear(char* dstr);
#endif
