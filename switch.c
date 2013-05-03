#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int a;
  printf("Elija una de las siguientes opciones\n");
	printf("1.-Numero Mayor\n");
	printf("2.-Temperatura\n");
	printf("3.-Promedio-Notas\n");
	printf("4.-Calculadora básica\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:

			{
			int x;
			int y;
			printf("Ingrese el primer numero: \n" );
			scanf("%d",&x);
			printf("Ingrese el segundo numero: \n" );
			scanf("%d",&y);

			if (x>y)
				{
					printf("El numero mayor es: %d\n\n",x );
				}
			else if (y>x)
				{
					printf("El numero mayor es: %d\n\n",y);
				}
			else
				{
					printf("Los dos son iguales: %d,%d\n\n\t",x,y);
				}
				return 0;	
			}

		case 2:
			{
			int x;
			printf("Ingrese la temperatura:\n");
			scanf("%d",&x);
			if ((x<=30) && (x>=15))
			{
				printf("El clima esta excelente, la temperatura es: %d\n",x);
			}
			else if ((x<=40) && (x>30))
			{
				printf("El clima esta caliente, la temperatura es: %d\n",x);
			}
			else
			{
				printf("El clima esta muy loco, o ingresaste mal la temperatura.\n");
			}
			return 0;
			}	
		case 3:

			{
				char nombre[30];
				char apellido[40];
				float x;
				float y;
				float z;
				float prome;

				printf("Ingrese el nombre del alumno\n");
				scanf("%s",nombre);
				printf("Ingrese el apellido del alumno\n");
				scanf("%s",apellido);
				printf("Ingrese la primera nota del alumno\n");
				scanf("%f",&x);
				printf("Ingrese la segunda nota del alumno\n");
				scanf("%f",&y);
				printf("Ingrese la tercera nota del alumno\n");
				scanf("%f",&z);
				prome=((x+y+z)/3);
				printf( "%s\t%s, el promedio es:%f\n",nombre,apellido,prome);
				return 0;
			}
		case 4:
				{

					float x;
					float y;
					float sum;
					float divicion;
					float resto;
					float producto;	
					printf("Ingresar el primer numero: ");
					scanf("%f" , &x);
					printf("Ingresar el segundo numero: ");
					scanf("%f" , &y);
					sum=x+y;
					resto=x-y;
					producto=x*y;
					divicion=x/y;
					printf("La suma es: %f\n",sum);
					printf("La resta es: %f\n",resto);
					printf("La multiplicacion es: %f\n",producto);
					printf("La divicion es: %f\n",divicion );	
					return 0;
           		}
	}
return 0;
}
