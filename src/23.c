/*
23) Pedir una frase y una vocal, eliminar la vocal ingresada de la frase. 
		Ejemplo:  frase : ballena azul  
				vocal : a
				salida: b llen   zul
*/
#include <stdio.h>

int main(){
    char frase[50];
    char vocal;

    for (int j = 0; j < 50 ; j++)       //limpia el string 
    {
            frase[j]=' ';
    }

    printf("Ingrese una frase: ");
    fgets(frase,50,stdin);
    printf("Ingrese una vocal: ");
    scanf("%c",&vocal);
    printf("\n");

switch (vocal)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        for (int k = 0; k < 50; k++)
            if (frase[k] == vocal)
            {
                printf(" ");
            }
            else
            {
                printf("%c",frase[k]);
            }
            break;

    default:
        printf("El caracterer ingresado no es una vocal...");
        break;
}
}