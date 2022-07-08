/*
123456789
12345678
1234567
123456
12345
1234
123
12
1
*/
#include <stdio.h>

void piramideNumero(int v)
{
int n=1;
int s;
v=v+1;
s=v;

	for (int i = 1; i < v; i++)
	{
		for (int j = 1; j < s; j++)
		{
			if ((i==1 && j<s)
			||(j<s))
			{
				printf("%i",n);
			}
			n=n+1;
		}
		printf("\n");
		n=1;
		s--;
	}
}

int main(){
int valor;
	printf("Ingrese un valor para empezar la piramide: ");
	scanf("%i",&valor);
	piramideNumero(valor);
}