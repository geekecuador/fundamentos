/***************************/
/*Nombre:David Pulloquinga*/
/****Primero Software*****/
/************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <math.h>
#define pi 3.14159
int main()
  {
        int radio;
        float diametro,area;
        printf("Ingrese el area del circulo, para calcular el diametro del mismo:\n");
        scanf("%d",&radio);
        diametro=radio*pi;
        area=pi*pow(radio,2);
        printf("El diametro de la circunferencia de radio %d, es: %f\n",radio,diametro);
		printf("El area del circulo es:%f\n",area);
		return 0;
	}
