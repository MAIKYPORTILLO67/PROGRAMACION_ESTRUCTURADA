// MIGUEL ANGEL PORTILLO ATTWELL 370097
// FECHA: 3 DE OCTUBRE DEL 2023
// DESCRIPCION: PROGRAMA QUE UTILIZE FUNCIONES DE LLENADO DE VECTORES Y MATRIZES Y LAS IMPRIMA
// MAPA_PE_ACT8.cpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamav 10

int vector1[tamav];
int vector2[tamav];
int vector3[20];
int matriz[4][4];

void menu(void);
void vector_uno(void);
void vector_dos(void);
void vector_tres(void);
void impri_vect(void);
void matriz4x4(void);
void impri_matri(void);

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
        printf("M  E  N  U\n");
        printf("INGRESE CON UN DIGITO LA OPRACION QUE QUIERE REALIZAR: \n");
        printf("[1-LLENAR VECTOR 1]\n");
        printf("[2-LLENAR VECTOR 2]\n");
        printf("[3-LLENAR VECTOR 3]\n");
        printf("[4-IMPRIMIR VECTORES]\n");
        printf("[5-LLENAR MATRIZ]\n");
        printf("[6-IMPRIMIR MATRIZ]\n");
        printf("[0-SALIR]\n");
        scanf("%d", &operacion);
        switch (operacion)
        {
        case 1:
            vector_uno();
            break;
        case 2:
            vector_dos();
            break;
        case 3:
            vector_tres();
            break;
        case 4:
            impri_vect();
            break;
        case 5:
            matriz4x4();
            break;
        case 6:
            impri_matri();
            break;

        default:
            break;
        }
    } while (operacion != 0);
}

void vector_uno(void)
{
    int i;
    int num;
    printf("LLENADO  DE VECTOR 1\n");
    printf("LLENAR SOLO CON NUMEROS QUE ESTE ENTRE EL 30 Y EL 70\n");
    for (i = 0; i < 10; i++)
    {
        printf("INGRESAR EL VALOR DE LA POCISION %d DEL VECTOR: \n", i + 1);
        scanf("%d", &num);
        if (num > 30 && num < 70)
        {
            vector1[i] = num;
        }
        else
        {
            i--;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("VALOR DE LA POCISION %d DEL VECTOR: [%d]\n", i + 1, vector1[i]);
    }
    printf("[SE LLENO EL VECTOR 3 CORRECTAMENTE]");
}

void vector_dos(void)
{
    int i;
    int num;
    printf("LLENADO  DE VECTOR 2");
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        num = rand() % 21;
        vector2[i] = num;
    }
    for (i = 0; i < 10; i++)
    {
        printf("EL VALOR DE LA POCISION %d DEL VECTOR: [%d]\n", i + 1, vector2[i]);
    }
    printf("[SE LLENO EL VECTOR 3 CORRECTAMENTE]");
}

void vector_tres(void)
{
    int i;
    int j;
    printf("LLENADO  DE VECTOR 3\n");
    for (i = 0; i < 10; i++)
    {
        vector3[i] = vector1[i];
    }
    for (i = 10, j = 0; i < 20, j < 10; i++, j++)
    {
        vector3[i] = vector2[j];
    }
    printf("[SE LLENO EL VECTOR 3 CORRECTAMENTE]");
}

void impri_vect(void)
{
    int i;
    printf("\n");
    printf("VECTOR 1:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d.-[%d]\n", i + 1, vector1[i]);
    }
    printf("\n");
    printf("VECTOR 2:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d.-[%d]\n", i + 1, vector2[i]);
    }
    printf("\n");
    printf("VECTOR 3:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d.-[%d]\n", i + 1, vector3[i]);
    }
}

void matriz4x4(void)
{
    int i;
    int j;
    int k=0;
    printf("LLENADO DE MATRIZ 4 X 4\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = vector3[k];
            k++;
        }
    }
}

void impri_matri(void)
{
    int i;
    int j;
    int k=0;
    printf("IMPRESION DE MATRIZ");
    printf("-------------------------------------\n");
    printf("[LUGAR]\t[1]\t[2]\t[3]\t[4]\n");
    for (i = 0; i < 4; i++)
    {
        printf("[%d]", i+1);
        for (j = 0; j < 4; j++)
        {
            matriz[i][j];
            printf("\t[%d]",matriz[i][j]);
        }
        printf("\n");
    }
}