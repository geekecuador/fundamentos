#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main ()
{
    int x,y,residuo;
    printf("Ingrese el primer numero:");
    scanf("%d",&x);
    printf("Ingrese el segundo numero");
    scanf("%d",&y);
    residuo=y%x;
    if (residuo==0)
    {
      printf("El numero es multiplo");
    }
    else
    {
        printf("El numero no es multiplo");
    }
	return 0;
}

