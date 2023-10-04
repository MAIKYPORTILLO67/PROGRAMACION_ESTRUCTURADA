//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:4 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Programa en C que use un menú para realizar las 4 operaciones básicas, 
//donde el usuario introduce 2 números enteros y realizará la operación según sea su selección del menú.
//MAPA_PE_ACT4_01.cpp
#include <stdio.h>
#include <stdlib.h>

int operacion;
float num1;
float num2;
float resultado;

int main()
{
    printf("MENU\n");
    printf("INGRESAR CON UN DIGITO LA ACCION QUE QUIERA EJECUTAR\n");
    printf("[1-SUMA-1][2-RESTA-2][3-MULTIPLICACION-3][4-DIVISION-4]");
    scanf("%d", &operacion);
    printf("INGRESE EL PRIMER NUMERO: ");
    scanf("%f", &num1);
    printf("INGRESE EL SEGUNDO NUMERO: ");
    scanf("%f", &num2);

    switch (operacion)
    {
    case 1:
        resultado = num1 + num2;
        printf("EL RESULTADO DE LA SUMA ENTRE EL NUMERO [%f] Y EL NUMERO [%f] ES: [%f]", num1, num2, resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("EL RESULTADO DE LA RESTA ENTRE EL NUMERO [%f] Y EL NUMERO [%f] ES: [%f]", num1, num2, resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("EL RESULTADO DE LA MULTIPLICACION ENTRE EL NUMERO [%f] Y EL NUMERO [%f] ES: [%f]", num1, num2, resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("EL RESULTADO DE LA DIVISION ENTRE EL NUMERO [%f] Y EL NUMERO [%f] ES: [%f]", num1, num2, resultado);
        break;
    default:
        printf("LA ACCION QUE INGRESO CON EL DIGITO NO ESTA DISPONIBLE.");
        break;
    }

    return 0;
}