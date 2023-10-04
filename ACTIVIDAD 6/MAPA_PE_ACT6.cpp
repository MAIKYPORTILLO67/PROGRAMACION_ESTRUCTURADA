// MIGUEL ANGEL PORTILLO ATTWELL 370097
// FECHA: 12 DE SEPTIEMBRE DEL 2023
// DESCRIPCION: PROGRAMA QUE MANEJE UN ESQUELETE DE SELECCION MULTIPLE
// QUE FUNCIONE A BASE DE ACTIVIDADES FORMADAS POR FUNCIONES
// MAPA_PE_ACT6.cpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(void);
void desendentes(void);
void par_impar(void);
void min_max(void);
void tablas_mult(void);

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
        printf("INGRESA CON UN NUMERO LA ACTIVIDAD QUE QUIERES INICIAR\n");
        printf("[1-NUMEROS DECENDENTES]\n");
        printf("[2-PAR O IMPAR]\n");
        printf("[3-NUMERO MIN Y MAX]\n");
        printf("[4-TABLAS DE MULTIPLICAR]\n");
        printf("[0-SALIR]\n");
        printf("ACTIVIDAD: ");
        scanf("%d", &operacion);
        switch (operacion)
        {
        case 1:
            desendentes();
            break;
        case 2:
            par_impar();
            break;
        case 3:
            min_max();
            break;
        case 4:
            tablas_mult();
            break;
        default:
            break;
        }
    } while (operacion != 0);
}

void desendentes(void)
{
    int n;
    int i;
    int j= 0;

    printf("NUMEROS DECENDENTES\n");
    printf("INGRESE EL VALOR DE N: ");
    scanf("%d", &n);

    for (i = n - 1; i > 0; i--) 
    {
        j++;
        printf("%d.-[%d]\n", j, i);
    }
}

void par_impar(void)
{
    int n = 40;
    int numero;
    int i;
    int numpar = 0;
    int numimpar = 0;

    srand(time(NULL));

    printf("NUMERO PAR E IMPAR\n");

    for ( i = 0; i < n; i++)
    {
        numero = rand() % 201;

        if (numero % 2 == 0)
        {
            printf("NUMERO %d: [%d]-PAR\n", i + 1, numero);
            numpar++;
        }
        else
        {
            printf("NUMERO %d: [%d]-IMPAR\n", i + 1, numero);
            numimpar++;
        }
    }
    printf("CANTIDAD DE NUNMEROS PAR: [%d]\n", numpar);
    printf("CANTIDAD DE NUNMEROS IMPAR: [%d]\n", numimpar);
}

void min_max(void)
{
    int n = 35;
    int numero;
    int min = 200;
    int max;
    int i;

    srand(time(NULL));

    printf("NUMERO MINIMO Y MAXIMO\n");

    for ( i = 0; i < n; i++)
    {
        numero = rand() % 101 + 100;
        printf("%d.-%d\n", i+1, numero);

        if (numero < max)
        {
            if (numero < min)
            {
                min = numero;
            }
        }
        if (numero > max)
        {
            max = numero;
        }
    }

    printf("EL NUMERO MENOR ES: [%d]\n", min);
    printf("EL NUMERO MAYOR ES: [%d]\n", max);
}

void tablas_mult(void)
{
    int i;
    int n = 10;
    int tabla;
    int resultado;

    printf("\n");
    printf("TABLAS DE MULTIPLICAR\n");

    srand(time(NULL));
    tabla = rand() % 21;
    
    for(i = 0; i < n; i++)
    {
        resultado = tabla * (i+1);
        printf("[%d] X [%d] = [%d]\n", tabla, i+1, resultado);
    } 
}