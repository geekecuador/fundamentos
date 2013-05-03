#include <stdio.h>
#define TEXTO "Programar en c"
void main()
{
    char C1='A',C2='B';
    float f1=1234.567;
    int i=12345,j=0xabcd, k=0777;

    printf("%s\n","Bienvenido al programa");
    puts(TEXTO);
    printf("%s", "Es muy bonito");
    putchar('\n');
    printf("%-19.7s\n","Escuela Politecnica del Ejercito");
    printf("%-3c%5c\n",C1,C2);
    putchar(65);
    printf("\n%08ld%08d%08u\n",i,'B','A');
    printf("%8d%8x%8o\n",i,j,k);
    printf("%#12f%012.2g%12.2e\n",f1,f1,f1);
}
