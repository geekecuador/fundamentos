#include<stdio.h>
#include<conio.h>
void main()
{

int n, i, s, st=0;
printf("\nIngrese un numero:\t");
scanf("%d",&n);
  for(i=1;i<n;i++)
	{
		if(n%i==0)
		st+=i;
	}
		if(st==n)
		{
			printf("\nEl %d es un numero perfecto",n);
		}
			else
			{
				printf("\nEl %d no es un numero perfecto",n);
                       		 }
getch();
}
