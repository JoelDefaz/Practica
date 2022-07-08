#include <stdio.h>

void SerieSignos (int x)
{
    int count=1;
    char signo=' ';

    while (count <= x)
    {
        if (count %2 == 0)
        {
            signo ='-';
        }
        else 
        {
            signo ='+';
        }
            for (int i = 0; i < count; i++)
            {
                printf("%c",signo);
            }
            printf(" ");
            count = count+1;
    }
}

int main()
{
int x;
printf("Cuantos signos desea imprimir: ");
scanf("%i",&x);
    SerieSignos(x);
}