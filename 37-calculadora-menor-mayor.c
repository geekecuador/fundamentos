/***************************/
/*Nombre:David Pulloquinga*/
/****Primero Software*****/
/************************/
#include<stdio.h>
#include<conio.h>
int main()
  {
        int x,y,z,suma,promedio,producto,menor,mayor;/* code */
		printf("Ingrese 3 enteros diferentes: ");
		scanf("%i %i %i",&x,&y,&z);
		suma=x+y+z;
		promedio=(x+y+z)/3;
        producto=x*y*z;
        printf("La suma es: %i\n",suma);
        printf("El producto es: %i\n",producto );
        printf("El promedo es: %i\n",promedio);
        if ((x>y) && (x>z))
        {
        	mayor=x;
        	printf("El grande es:%i\n",mayor);
        }
        else if (y>z)
        {
        	mayor=y;
        	printf("El grande es%i\n",mayor);
        }
        else
        {
        	printf("El grande es:%i\n",z);
        }
        if ((x<y) && (x<z))
        {
        	menor=x;
        	printf("El menor es:%i",menor);
        }
        else if (y<z)
        {
        	menor=y;
        	printf("El menor es%i",menor);
        }
        else
        {
        	printf("El menor es:%i\n",z);
        }

		return 0;
	}
