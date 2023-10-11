// MIGUEL ANGEL PORTILLO ATTWELL 370097
// FECHA: 10 DE OCTUBRE DEL 2023
// DESCRIPCION:
// MAPA_PE_ACT9.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define v 15

int vector[15];
int matriz[4][4];

void menu(void);
void lle_vect(void);
void lle_matri(void);
void impri_vect(void);
void impri_matri(void);
void ord_vect(int vector[]);
void val_vect(int vector[]);
bool sin_rep(int vector[], int num);
bool sin_rep_matri(int matriz[][4], int num);

int main()
{
    menu();

    return 0;
}

void menu(void)
{
    int operacion;
    do
    {
        printf("\n");
        printf("M  E  N  U\n");
        printf("INGRESE CON UN DIGITO LA OPERACION QUE QUIERE REALIZAR: \n");
        printf("[1-LLENAR VECTOR]\n");
        printf("[2-LLENAR MATRIZ]\n");
        printf("[3-IMPRIMIR VECTORES]\n");
        printf("[4-IMPRIMIR MATRIZ]\n");
        printf("[5-ORDENAR VECTOR]\n");
        printf("[6-BUSCAR VALOR EN VECTOR]\n");
        printf("[0-SALIR]\n");
        printf("OPERACION: ");
        scanf("%d", &operacion);
        switch (operacion)
        {
        case 1:
            lle_vect();
            break;
        case 2:
            lle_matri();
            break;
        case 3:
            impri_vect();
            break;
        case 4:
            impri_matri();
            break;
        case 5:
            ord_vect(vector);
            break;
        case 6:
            val_vect(vector);
            break;

        default:
            break;
        }
    } while (operacion != 0);
}

void lle_vect(void)
{
    int i;
    int num;
    printf("LLENADO DE VECTOR");
    srand(time(NULL));
    for (i = 0; i < v; i++)
    {
        do
        {
            num = (rand() % 101) + 100;
        } while (sin_rep(vector, num));
        vector[i] = num;
    }
    printf("[SE LLENO EL VECTOR CORRECTAMENTE]");
}

void lle_matri(void)
{
    int i;
    int j;
    int k = 0;
    int num;
    printf("LLENADO DE MATRIZ 4 X 4\n");
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            do
            {
                num = rand() % 17;

            } while (sin_rep_matri(matriz, num));
            matriz[i][j] = num;
            k++;
        }
    }
}

void impri_vect(void)
{
    int i;
    printf("\n");
    printf("VECTOR:\n");
    for (i = 0; i < v; i++)
    {
        printf("%d.-[%d]\n", i + 1, vector[i]);
    }
}

void impri_matri(void)
{
    int i;
    int j;
    int k = 0;
    printf("IMPRESION DE MATRIZ");
    printf("-------------------------------------\n");
    printf("[LUGAR]\t[1]\t[2]\t[3]\t[4]\n");
    for (i = 0; i < 4; i++)
    {
        printf("[%d]", i + 1);
        for (j = 0; j < 4; j++)
        {
            matriz[i][j];
            printf("\t[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}

void ord_vect(int vector[])
{
    int i;
    int j;
    int temp;
    printf("ESCOGISTE ORDENAR EL VECTOR\n");
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j + 1];
                vector[j + 1] = vector[j];
                vector[j] = temp;
            }
        }
    }
    for (i = 0; i < 15; i++)
    {
        printf("%d.-[%d]\n", i + 1, vector[i]);
    }
}

void val_vect(int vector[])
{
    int i;
    int j;
    int dato;
    char band = 'F';
    printf("QUE NUMERO DESEAS BUSCAR?\n");
    scanf("%d", &dato);
    while (band == 'F' && i < 15)
    {
        if (vector[i] == dato)
        {
            band = 'V';
        }
        i++;
    }
    if (band == 'F')
    {
        printf("ESE NUMERO NO EXISTE EN EL VECTOR\n");
    }
    else if (band == 'V')
    {
        printf("EL NUMERO HA SIDO ENCONTRADO EN LA POSICION: %d\n", i);
    }
}

bool sin_rep(int vector[], int num)
{
    int i;
    for (i = 0; i < 15; i++)
    {
        if (num == vector[i])
        {
            return true;
        }
    }
    return false;
}

bool sin_rep_matri(int matriz[][4], int num)
{
    int i;
    int j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (num == matriz[i][j])
            {
                return true;
            }
        }
    }
    return false;
}