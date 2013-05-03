#include "stdio.h"
void main()
{

    int i;
    char ch;
    float f;

    ch='A';
    i=(ch+5)*4+8;
    f=i*2;
    printf("%d%c%#f\n",i,ch,f);
    ch=(char)(i/5);
    i=ch*2+2;
    f=(float)i;
    printf("%d%c%.2e\n",i,ch,f);
}
