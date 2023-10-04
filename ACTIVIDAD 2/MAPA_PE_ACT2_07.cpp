//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:25 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que lea 3 números y desplegar cuál número es el menor y su valor
//MAPA_PE_ACT2_07.cpp
#include <stdio.h>
#include <stdlib.h>

int num1;
int num2;
int num3;

int main()
{
    printf("PROGRAMA QUE MUESTRA EL NUMERO MENOR\n");
    printf("INGRESAR A CONTINUACION 3 NUMEROS");
    printf("INGRESAR EL PRIMER NUMERO: ");
    scanf("%d", &num1);
    printf("INGRESAR EL SEGUNDO NUMERO: ");
    scanf("%d", &num2);
    printf("INGRESAR EL TERCER NUMERO: ");
    scanf("%d", &num3);

    if(num1 < num2)
    {
        if(num1 < num3)
        {
            printf("EL NUMERO MENOR ES EL %d", num1);
        }
        else
        {
            printf("EL NUMERO MENOR ES EL %d", num3);
        }
    }
    else
    {
        if(num2 < num3)
        {
            printf("EL NUMERO MENOR ES EL %d", num2);
        }
        else
        {
            printf("EL NUMERO MENOR ES EL %d", num3);
        }
    }

    return 0;
}