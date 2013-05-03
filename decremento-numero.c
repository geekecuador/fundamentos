#include <stdio.h>
#include <conio.h>
#include <math.h>
 int main()
 {
     int x;
     int contador;
     contador=x;
     printf("Cual es el limite\n ");
     scanf("%d",&x);
     do
     {
        x=x--;
        printf("%d\t",x);
     }
    while
    (x>0);
    getch();
 }
