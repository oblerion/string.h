#include <stdlib.h>
#include <stdio.h>
#include "string.h"

int main()
{

    char* str=string();
    printf("\nlen %d",slen(str));
    scpy(str,"123456");
    printf("\nf %d",scmp(str,"12345"));
    //printf("\nlen %d %s",slen(str),str);
    free(str);
    return 0;
}
