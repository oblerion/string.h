#include "string.h"
char* string()
{
    char* s = (char*)calloc(sizeof(char*),1);
    return s;
}

int slen(char* str)
{
    int i=0;
    if(str!=NULL)
    {
        while(str[i]!='\0') i++;
    }
    return i;
}
void saddc(char* dstr,char c)
{
    if(dstr==NULL) return;
    int size = slen(dstr);
    dstr = realloc(dstr,size+1);
    dstr[size] = c;
    dstr[size+1] = '\0';
}
void scat(char* dstr,char* s)
{
    if(dstr==NULL || s==NULL) return;
    int asize = slen(dstr);
    int size = asize + slen(s);
    dstr = realloc(dstr,size);
    for(int i=asize;i<size;i++)
    {
        dstr[i] = s[i-asize];
    }
}
void sdel(char* dstr,int pos)
{
    if(pos>=0 && slen(dstr)>pos)
    {
        if(pos==sizeof(dstr)-1)
        {
            dstr[sizeof(dstr)]=' ';
            dstr[sizeof(dstr)-1]='\0';
        }
        else
        for(int i=pos;i<sizeof(dstr);i++)
        {
            dstr[i] = dstr[i+1];
        }
    }
}
void scpy(char* dstr,char* s)
{
    if(slen(s)>0)
    {
        dstr = realloc(dstr,slen(s));
        for(int i=0;i<slen(s);i++)
        {
            dstr[i] = s[i];
        }
        dstr[slen(s)]='\0';
    }
}
void ssub(char* dstr,int pos)
{
    if(pos>0 && slen(dstr)>pos)
    {
        char* lchar = (char*)malloc(slen(dstr)-pos);
        for(int i=0;i<slen(dstr)-pos;i++)
        {
            lchar[i] = dstr[i+pos];
        }
        lchar[slen(dstr)-pos]='\0';
        scpy(dstr,lchar);
        free(lchar);
    }
}
void ssubn(char* dstr,int pos,int n)
{
    if(dstr==NULL) return;
    if(pos>0 && slen(dstr)>=pos+n)
    {
        char* lchar = (char*)malloc(n);
        for(int i=pos;i<pos+n;i++)
        {
            lchar[i-pos] = dstr[i];
        }
        scpy(dstr,lchar);
        free(lchar);
    }
}
int sfind(char* dstr,char* s)
{
    int tofnd = slen(s);
    int fnd=0;
    int pos=-1;
    for(int i=0;i<slen(dstr);i++)
    {
        if(dstr[i]==s[fnd])
        {

            if(fnd==0 && pos==-1)
                pos=i;
            if(fnd==tofnd-1)
                return pos;
            fnd++;
            printf("\nfnd %d pos %d",fnd,pos);
        }
        else if(slen(dstr)-i<tofnd)
        {
            return -1;
        }
        else
        {
            pos=-1;
            fnd=0;
        }
    }
    return pos;
}
int scmp(char* dstr,char* dstr2)
{
    if(slen(dstr) == slen(dstr2) &&
        sfind(dstr,dstr2)==0) return 1;
    return -1;
}
void sclear(char* dstr)
{
    dstr = realloc(dstr,1);
}
