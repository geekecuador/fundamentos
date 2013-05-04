#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;
    printf("Ingrese el primer numero:");
    scanf("%d",&x);
    printf("Ingrese el segundo numero:");
    scanf("%d",&y);
    if (x>y)
        {
            printf("%d, es mayor que %d",x,y);
        }
    else if (y>x)

        printf("%d, es mayor que %d",y,x);

else
{
printf("%d y %d son iguales",x,y);
}

}
