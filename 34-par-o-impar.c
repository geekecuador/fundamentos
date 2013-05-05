/***************************/
/*Nombre:David Pulloquinga*/
/****Primero Software*****/
/************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
  {
        int x;
        int y;
        printf("Ingrese el numero a calcular: ");
        scanf("%d",&x);
        y=x%2;
        if (y==0)
        {
        	printf("El numero es par");
        }
        else
        {
            printf("El numero es impar");
        }
		return 0;
	}
