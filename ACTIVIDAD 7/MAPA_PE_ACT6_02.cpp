// MIGUEL ANGEL PORTILLO ATTWELL
// FECHA: 18 DE SEPTIEMBRE DEL 2023
// DESCRIPCION: PROGRAMA QUE MANEJE UN ESQUELETE DE SELECCION MULTIPLE
// QUE FUNCIONE A BASE DE ACTIVIDADES FORMADAS POR FUNCIONES
// MAPA_PE_ACT6_02.cpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ALUMNOS 40
#define NUM_UNIDADES 5

void menu(void);
void exa_dere(void);
void tab_mult(void);
void rango_cant(void);
void kg_turista(void);
void calif_intent(void);

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
        printf("ESCOGE LA SIGUIENTE OPERACION CON EL DIGITO CORRESPONDIENTE\n");
        printf("[1-DERECHO A EXAMEN]\n");
        printf("[2-TABLAS DE MULTIPLICAR]\n");
        printf("[3-CANTIDAD DE NUMEROS DENTRO DEL RANGO]\n");
        printf("[4-PESO TURISTAS]\n");
        printf("[5-CALIFICACIONES SEMESTRE]\n");
        printf("[0-SALIR]\n");
        printf("OPERACION: ");
        scanf("%d", &operacion);
        switch (operacion)
        {
        case 1:
            exa_dere();
            break;
        case 2:
            tab_mult();
            break;
        case 3:
            rango_cant();
            break;
        case 4:
            kg_turista();
            break;
        case 5:
            calif_intent();
            break;
        default:
            break;
        }
    } while (operacion != 0);
}

void exa_dere(void)
{
    int calificaciones[NUM_ALUMNOS][NUM_UNIDADES];
    int promedios[NUM_ALUMNOS];
    int countNoExamen = 0;

    for (int i = 0; i < NUM_ALUMNOS; i++)
    {

        printf("Ingrese las calificaciones para el alumno %d (en el formato 'calif1 calif2 calif3 calif4 calif5'): ", i + 1);

        for (int j = 0; j < NUM_UNIDADES; j++)
        {

            if (scanf("%d", &calificaciones[i][j]) != 1)
            {

                printf("Error al leer calificación. Asegúrese de ingresar números.\n");
            }
        }
    }

    for (int i = 0; i < NUM_ALUMNOS; i++)
    {

        int suma = 0;

        for (int j = 0; j < NUM_UNIDADES; j++)
        {

            suma += calificaciones[i][j];
        }

        promedios[i] = suma / NUM_UNIDADES;

        if (promedios[i] < 50)
        {
            countNoExamen++;
        }
    }

    printf("\nCantidad de alumnos que no tienen derecho al examen de nivelación: %d\n", countNoExamen);
}

void tab_mult(void)
{
    int i;
    int j;
    int resultado;
    int tabla;

    for (i = 1; i < 11; i++)
    {

        printf("TABLA DEL [%d]\n", i);
        for (j = 1; j < 11; j++)
        {
            resultado = i * j;

            printf("[%d] X [%d] = [%d]\n", i, j, resultado);
        }
        printf("\n");
    }
}

void rango_cant(void)
{
    int numeros[100];
    int cantidadNumeros = 0;
    int suma = 0;
    int rangoInicio, rangoFin;

    printf("Ingrese el rango (inicio fin): ");
    char input[100];
    gets(input);
    sscanf(input, "%d %d", &rangoInicio, &rangoFin);

    while (1)
    {
        printf("Ingrese un número (o -1 para terminar): ");
        gets(input);

        int numero = atoi(input);

        if (numero == -1)
        {

            break;
        }

        if (numero >= rangoInicio && numero <= rangoFin)
        {

            numeros[cantidadNumeros] = numero;
            suma += numero;
            cantidadNumeros++;
        }
    }

    float media = (float)suma / cantidadNumeros;

    printf("Suma de los números dentro del rango: %d\n", suma);
    printf("Media aritmética de los números dentro del rango: %.2f\n", media);
}

void kg_turista(void)
{
    int numTuristas;
    double pesoTurista, pesoTotal = 0;
    int capacidadTuristas = 10;
    double capacidadPesoKilos = 700;
    double sobrepesoPermitido = 0.15; // 15% de sobrepeso

    printf("Por favor, ingrese el número de turistas: ");
    scanf("%d", &numTuristas);

    if (numTuristas <= 0)
    {
        printf("Debe ingresar al menos un turista.\n");
        return;
    }

    for (int i = 1; i <= numTuristas; i++)
    {
        printf("Peso del turista %d (en kilos): ", i);
        scanf("%lf", &pesoTurista);
        pesoTotal += pesoTurista;
    }

    double promedioPeso = pesoTotal / numTuristas;

    if (numTuristas <= capacidadTuristas && pesoTotal <= capacidadPesoKilos &&
        pesoTotal <= (1 + sobrepesoPermitido) * capacidadPesoKilos)
    {
        printf("La embarcación puede salir a navegar.\n");
        printf("Promedio de peso de los turistas: %.2lf kilos.\n", promedioPeso);
        printf("Se cumplió la condición de cantidad de turistas.\n");
    }
    if (pesoTotal <= capacidadPesoKilos && pesoTotal <= (1 + sobrepesoPermitido) * capacidadPesoKilos)
    {
        printf("La embarcación puede salir a navegar.\n");
        printf("Promedio de peso de los turistas: %.2lf kilos.\n", promedioPeso);
        printf("Se cumplió la condición de peso total.\n");
    }
    else
    {
        printf("La embarcación NO puede salir a navegar.\n");
    }
}

void calif_intent(void)
{
    int intentos = 3;
    int calif[3];
    float sumaCalif = 0;

    for (int i = 0; i < intentos; i++)
    {
        printf("Ingrese la calificación del examen parcial %d: ", i + 1);
        char input[100];
        gets(input);

        calif[i] = atoi(input);

        sumaCalif += calif[i];
    }

    float prome = sumaCalif / intentos;

    if (prome >= 60)
    {
        printf("Aprobado. Promedio final: %.2f\n", prome);
    }

    if (prome >= 40)
    {
        printf("Repetir materia. Promedio final: %.2f\n", prome);
    }

    else
    {
        printf("Baja temporal. Promedio final: %.2f\n", prome);
    }
}