//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:1 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Algoritmo que lea 3 números y desplegar los 3 números en orden ascendente 
//MAPA_PE_ACT3_03.cpp
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
                printf("EL PRIMER NUMERO ES: %d \n", num1);
                printf("EL SEGUNDO NUMERO ES: %d \n", num2);
                printf("EL TERCER NUMERO ES: %d \n", num3);
            }
            else
            {
                printf("EL PRIMER NUMERO ES: %d \n", num1);
                printf("EL SEGUNDO NUMERO ES: %d \n", num3);
                printf("EL TERCER NUMERO ES: %d \n", num2); 
            }
        }
        else
        {
            printf("EL PRIMER NUMERO ES: %d \n", num3);
            printf("EL SEGUNDO NUMERO ES: %d \n", num1);
            printf("EL TERCER NUMERO ES: %d \n", num2);
        }
    }
    else
    {
        if(num2 < num3)
        {
            if(num1 < num3)
            {
                printf("EL PRIMER NUMERO ES: %d \n", num2);
                printf("EL SEGUNDO NUMERO ES: %d \n", num1);
                printf("EL TERCER NUMERO ES: %d \n", num3);
            }
            else
            {
                printf("EL PRIMER NUMERO ES: %d \n", num2);
                printf("EL SEGUNDO NUMERO ES: %d \n", num3);
                printf("EL TERCER NUMERO ES: %d \n", num1);
            }
        }
        else
        {
            printf("EL PRIMER NUMERO ES: %d \n", num3);
            printf("EL SEGUNDO NUMERO ES: %d \n", num2);
            printf("EL TERCER NUMERO ES: %d \n", num1);
        }
    }
    
    return 0;
}