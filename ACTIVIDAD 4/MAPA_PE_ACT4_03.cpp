//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:4 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Programa en C que lea 6 números, desplegar el valor del número mayor.
//MAPA_PE_ACT4_03.cpp
#include <stdio.h>
#include <stdlib.h>

float num1;
float num2;
float num3;
float num4;
float num5;
float num6;
float nummayor;

int main()
{
    printf("INGRESAR EL VALOR DEL PRIMER NUMERO: ");
    scanf("%f", &num1);
    printf("INGRESAR EL VALOR DEL SEGUNDO NUMERO: ");
    scanf("%f", &num2);
    printf("INGRESAR EL VALOR DEL TERCER NUMERO: ");
    scanf("%f", &num3);
    printf("INGRESAR EL VALOR DEL CUARTO NUMERO: ");
    scanf("%f", &num4);
    printf("INGRESAR EL VALOR DEL QUINTO NUMERO: ");
    scanf("%f", &num5);
    printf("INGRESAR EL VALOR DEL SEXTO NUMERO: ");
    scanf("%f", &num6);

    nummayor = num1;

    if(num2 > nummayor)
    {
        nummayor = num2;
    }
    if(num3 > nummayor)
    {
        nummayor = num3;
    }
    if(num4 > nummayor)
    {
        nummayor = num4;
    }
    if(num5 > nummayor)
    {
        nummayor = num5;
    }
    if(num6 > nummayor)
    {
        nummayor = num6;
    }

    printf("EL NUMERO MAYOR ES: [%f]", nummayor);

    return 0;
}