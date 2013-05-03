#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b,contador;
	contador=1;
	printf("Ingrese el numero:\n");
	scanf("%d",&a);
	printf("Cuantos veces quiere decrementar:\n");
	scanf("%d",&b);

	do
	{
	    a--;
	    contador++;
	}
	while

	    (contador<=b);

	printf("El numero es: %d",a);
    return 0;
}
