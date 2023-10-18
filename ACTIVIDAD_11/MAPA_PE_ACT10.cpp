// MIGUEL ANGEL PORTILLO ATTWELL 370097
// FECHA: 10 DE OCTUBRE DEL 2023
// DESCRIPCION:
// MAPA_PE_ACT10.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "maikylib.h"
#define P 300
#define N 100

void menu(void);
int mensage();
int val_ent(int rang_inicial, int rang_final, const char sms[], const char sms_error[]);

int main()
{
    menu();
    return 0;
}

int mensage()
{
    int operacion;
    printf("\n");
    printf("M  E  N  U\n");
    printf("INGRESE CON UN DIGITO LA OPERACION QUE QUIERE REALIZAR: \n");
    printf("[1-AGREGAR MANUAL]\n");
    printf("[2-ELIMINAR REGISTRO]\n");
    printf("[3-BUSCAR]\n");
    printf("[4-ORDENAR]\n");
    printf("[5-IMPRIMIR]\n");
    printf("[0-SALIR]\n");
    printf("OPERACION: ");
    operacion = val_ent(0,6,"ESCOGE UNA DE LA OPCIONES","ERROR, LA OPCION QUE ESCOGIO NO ES VALIDA");
    return operacion;
}

void menu(void)
{
    Tmaiky reg[P];
    int operacion;
    int tam = 0;
    int band = 0;

    do
    {
        operacion = mensage();
        switch (operacion)
        {
        case 1:
            system("CLS");
            tam = add_r(reg, tam);
            tam = add_m(reg, tam);
            printf("\n");
            system("PAUSE");
            break;
        case 2:
            system("CLS");
            eliminar_reg(reg, tam);
            printf("\n");
            system("PAUSE");
            break;
        case 3:
            system("CLS");
            buscar_reg(reg, tam);
            printf("\n");
            system("PAUSE");
            break;
        case 4:
            system("CLS");
            band = ordenar_reg(reg, tam, band);
            printf("\n");
            system("PAUSE");
            break;
        case 5:
            system("CLS");
            imprimir_regs(reg, tam);
            printf("\n");
            system("PAUSE");
            break;
        case 0:
            system("CLS");
            printf("ADIOS QUE TENGA BUEN DIA\n");
            system("PAUSE");
            break;
        default:
            break;
        }
    } while (operacion != 0);
}

//printf("STATUS","MATRICULA","APPATERNO","APMATERNO","NOMBRE","EDAD","SEXO");