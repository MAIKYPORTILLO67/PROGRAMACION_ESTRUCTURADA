//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:1 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
//MAPA_PE_ACT3_02.cpp
#include <stdio.h>
#include <stdlib.h>

int num1;
int num2;
int num3;

int main()
{   
    printf("PROGRAMA QUE MUESTRA EL NUMERO MENOR\n");
    printf("INGRESAR A CONTINUACION 3 NUMEROS\n");
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
            if(num2 < num3)
            {
                printf("EL NUMERO DEL MEDIO ES: %d \n", num2);
            }
            else
            {
                printf("EL NUMERO DEL MEDIO ES: %d \n", num3);
            }
        }
        else
        {
            printf("EL NUMERO DEL MEDIO ES: %d \n", num1);
        }
    }
    else
    {
        if(num2 < num3)
        {
            if(num1 < num3)
            {
                printf("EL NUMERO DEL MEDIO ES: %d \n", num1);
            }
            else
            {
                printf("EL NUMERO DEL MEDIO ES: %d \n", num3);
            }
        }
        else
        {
            printf("EL NUMERO DEL MEDIO ES: %d \n", num2);
        }
    }

    return 0;
}
