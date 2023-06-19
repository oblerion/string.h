
### function
```c
#ifndef STRING_H
#define STRING_H
#include <stdlib.h>
#include <stdio.h>
char* string();                      //constructor 
int slen(char* str);                 //get length
void saddc(char* dstr,char c);       //add char to string
void scat(char* dstr,char* s);       //cat cat s to dstr
void sdel(char* dstr,int pos);       //delete char at pos
void scpy(char* dstr,char* s);       //copy s to dstr
void scpyn(char* dstr,char* s,int n);//copy n char of s to dstr
void ssub(char* dstr,int pos);       //sub dstr begin at pos
void ssubn(char* dstr,int pos,int n);//sub dstr begin at pos n char
int sfind(char* dstr,char* s);       //find s to dstr
int scmp(char* dstr,char* dstr2);    //dstr==dstr2 return 1 else return -1
void sclear(char* dstr);             //clear to void string
#endif
```
