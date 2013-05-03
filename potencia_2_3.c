#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int x;
    int a;
    int y;
    y=0;
    a=0;
    int cubo;
    int cuadrado;
    int contador=0;
    printf("Cual es el numero:\n");
    scanf("%d",&x);
    printf("Numero\tCuadrado\tCubo");
    do
    {
        y++;
        a++;
        contador++;
        cuadrado=pow(y,2);
        cubo=pow(y,3);
        printf("\n%d\t%d\t\t%d",a,cuadrado,cubo);
    }
    while
    (contador<x );
    return 0;
}
