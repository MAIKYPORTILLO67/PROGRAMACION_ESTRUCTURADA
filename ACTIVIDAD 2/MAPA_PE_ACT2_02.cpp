//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:25 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que lea un número entero, y desplegar si el número es “PAR” o “IMPAR” 
//MAPA_PE_ACT2_02.cpp
#include <stdio.h>
#include <stdlib.h>

int num1;

int main()
{
    printf("NUMERO PAR O IMPAR\n");
    printf("INGRESA UN NUMERO ENTERO: ");
    scanf("%d", &num1);

    if(num1 % 2 == 0)
    {
        printf("EL NUMERO %d ES: ", num1);
        printf("[PAR]");
    }
    if(num1 % 2 != 0)
    {
        printf("EL NUMERO %d ES: ", num1);
        printf("[IMPAR]");
    }
    return 0;
}