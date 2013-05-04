#include <stdio.h>
#define PINTA "Emocionante emocion"
void main()
{
    int cuenta;

    printf("/%2.12ld/\n",1234567);
    printf("/%10.2e/\n",1234567);
    printf("/%-22.7s/\n",PINTA);
    printf("/%#x/\n",336);
    printf("/%c/\n",70);
    printf("\"Los valores: %-10d %%\",%n estan dados\n",60,&cuenta);
    printf("%-2d\n",cuenta);

}
