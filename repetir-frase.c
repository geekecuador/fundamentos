#include<stdio.h>
#include<conio.h>
void main()
{
    char x[10];
    int y,contador;
    contador=1;
    printf("Ingrese el texto:\n");
    scanf("%s",x);
    printf("Cuantas veces desea ver repetido:\n");
    scanf("%i",&y);
    do
    {
        printf("%s\n",x);
        contador++;
    }
    while
    (contador<=y);
    getchar();
}
