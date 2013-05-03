#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b,contador;
	contador=1;
	printf("Ingrese el numero:\n");
	scanf("%i",&a);
	printf("Cuantos veces quiere incrementar:\n");
	scanf("%i",&b);

	do
	{
	    a++;
	    contador++;
	}
	while

	    (contador<=b);

	printf("El numero es: %i",a);
    return 0;
}
