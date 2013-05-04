#include <stdio.h>
#include<math.h>
#include <conio.h>

int main()
{
    int x,y,suma,producto,diferencia,cociente,residuo;
    printf("\n\n\t*************************************");
    printf("\n\n\t***Realizado por David Pulloquinga***");
    printf("\n\n\tTrabajo de Fundamentos de Prgramacion");
    printf("\n\n\t*************************************\n\n");
    printf("Ingrese el primer numero:\n");
    scanf("\t%d",&x);
    printf("Ingrese el segundo numero:\n");
    scanf("\t%d",&y);
    suma=x+y;
    producto=x*y;
    diferencia=x-y;
    cociente=x/y;
    residuo=x%y;
    printf("La suma es: %d\n",suma);
    printf("El prodcuto es: %d\n",producto);
    printf("La diferencia es: %d\n",diferencia);
    printf("El cociente es: %d\n",cociente);
    printf("El residuo es: %d\n",residuo);
return 0;

}
