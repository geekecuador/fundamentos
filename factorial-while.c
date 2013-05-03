#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int x;
    int factorial;
    int contador;
    factorial=1;
contador=1;

    printf("Ingrese el numero: \n");
    scanf("%i",&x);
   while (contador<=x)
    {
        factorial=factorial*contador++;

    }
    printf("El factorial es %i",factorial);
return 0;
}
