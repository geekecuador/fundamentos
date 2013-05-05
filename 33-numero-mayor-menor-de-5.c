#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
    int a,b,c,d,e,mayor,menor;
    printf("Ingrese el primer numero:\n");
    scanf("%i",&a);
    printf("Ingrese el segundo numero:\n");
    scanf("%i",&b);
    printf("Ingrese el tercer numero:\n");
    scanf("%i",&c);
    printf("Ingrese el cuarto numero:\n");
    scanf("%i",&d);
    printf("Ingrese el quinto numero:\n");
    scanf("%i",&e);
    system("cls");
    if ((a>b) && (a>c) && (a>d) && (a>e))
    {
      mayor=a;
    	printf("%d",mayor);
    }
    else if ((b>c) && (b>d) && (b>e))
    {
       mayor=b;
    	printf("El numero mayor: es %d\n",mayor);
    }
    else if ((c>d) && (c>e))
    {
        mayor=c;
    	printf("El numero mayor: es %d\n",mayor);
    }
    else if (d>e)
    {
        mayor=d;
    	printf("El numero mayor: es %d\n",mayor);
    }
    else
    {
        mayor=e;
        printf("El numero mayor: es %d\n",e);
    }
    if ((a<b) && (a<c) && (a<d) && (a<e))
    {
    	menor=a;
    	printf("%d",menor);
    }
    else if ((b<c) && (b<d) && (b<e))
    {
       menor=b;
    	printf("El numero menor: es %d\n",menor);
    }
    else if ((c<d) && (c<e))
    {
        menor=c;
    	printf("El numero menor: es %d\n",menor);
    }
    else if (d<e)
    {
        menor=d;
    	printf("El numero menor: es %d\n",menor);
    }
    else
    {
        menor=e;
        printf("El numero menor: es %d\n",e);
    }
	return 0;
}
