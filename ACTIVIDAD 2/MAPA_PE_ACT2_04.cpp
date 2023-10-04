//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:25 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER ) preguntar al 
//usuario cual es su SEXO y desplegar la leyenda “HOLA, ERES HOMBRE ”, “ HOLA, ERES MUJER” 
//MAPA_PE_ACT2_02.cpp
#include <stdio.h>
#include <stdlib.h>

int sexo;

main()
{
    printf("ingrese solo el numero de las siguientes opciones");
    printf("¿Eres hombre o mujer? (1.- HOMBRE 2.- MUJER): ");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        printf("HOLA, ERES HOMBRE");
    }
    else
    {
        printf("HOLA, ERES MUJER");
    }

    return 0;
}