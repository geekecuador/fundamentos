#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
 char s[15];
 int n;
    printf("Ingrese la cadena:");
    scanf("%s",&s);
 n = strlen(s);

 printf("La cadena: %s tiene %d caracteres.\n", s, n);

 return 0;
}
