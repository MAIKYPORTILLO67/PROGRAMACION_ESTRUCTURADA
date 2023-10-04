// MIGUEL ANGEL PORTILLO ATTWELL
// FECHA: 18 DE SEPTIEMBRE DEL 2023
// DESCRIPCION: PROGRAMA QUE MANEJE UN ESQUELETE DE SELECCION MULTIPLE
// QUE FUNCIONE A BASE DE ACTIVIDADES FORMADAS POR FUNCIONES
// MAPA_PE_ACT6_01.cpp
#include <stdio.h>
#include <stdlib.h>

void menu(void);
void fibonacci(void);
void factorial(void);
void cant_dig(void);

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
        printf("[1-FIBONACCI]\n");
        printf("[2-FACTORIAL]\n");
        printf("[3-CANTIDAD DE DIGITOS]\n");
        printf("[0-SALIR]\n");
        printf("OPERACION: ");
        scanf("%d", &operacion);
        switch (operacion)
        {
        case 1:
            fibonacci();
            break;
        case 2:
            factorial();
            break;
        case 3:
            cant_dig();
            break;
        default:
            break;
        }
    } while (operacion != 0);
}

void fibonacci(void)
{
    int metodo;
    int n;
    int a = -1;
    int s = 1;
    int r = 0;
    int i, j;
    printf("MENU DE FIBONACCI\n");
    printf("ESCOGE CON QUE TIPO DE CICLO SERA REALIZARA EL PROGRAMA\n");
    printf("[1-CICLO [FOR]]\n");
    printf("[2-CICLO [WHILE]]\n");
    printf("[3-CICLO [DO-WHILE]]\n");
    printf("CICLO: ");
    scanf("%d", &metodo);
    switch (metodo)
    {
    case 1:
        printf("CUANTAS VECES QUIERE QUE SE REPITA EL CICLO? ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            r = a + s;
            printf("[%d]\n", r);
            a = s;
            s = r;
        }
        break;
    case 2:
        printf("CUANTAS VECES QUIERE QUE SE REPITA EL CICLO? ");
        scanf("%d", &n);
        while (n != 0)
        {
            r = a + s;
            printf("[%d]\n", r);
            a = s;
            s = r;
            n--;
        }
        break;
    case 3:
        printf("CUANTAS VECES QUIERE QUE SE REPITA EL CICLO? ");
        scanf("%d", &n);
        do
        {
            r = a + s;
            printf("[%d]\n", r);
            a = s;
            s = r;
            n--;
        } while (n != 0);

        break;
    default:
        break;
    }
}

void factorial(void)
{
    int metodo;
    int n;
    int r;
    int i;
    printf("MENU DE FACTORIAL\n");
    printf("ESCOGE CON QUE TIPO DE CICLO SERA REALIZARA EL PROGRAMA\n");
    printf("[1-CICLO [FOR]]\n");
    printf("[2-CICLO [WHILE]]\n");
    printf("[3-CICLO [DO-WHILE]]\n");
    printf("CICLO: ");
    scanf("%d", &metodo);
    switch (metodo)
    {
    case 1:
        printf("CUANTAS VECES QUIERE QUE SE REPITA EL CICLO? ");
        scanf("%d", &n);
        r = n;
        for (i = n - 1; i > 0; i--)
        {
            printf("[%d] X [%d] ", r, i);
            r = r * i;
            printf("= [%d]\n", r);
        }
        break;
    case 2:
        printf("CUANTAS VECES QUIERE QUE SE REPITA EL CICLO? ");
        scanf("%d", &n);
        r = n;
        while (n != 1)
        {
            n--;
            printf("[%d] X [%d] ", r, n);
            r = r * n;
            printf("= [%d]\n", r);
        }
        break;
    case 3:
        printf("CUANTAS VECES QUIERE QUE SE REPITA EL CICLO? ");
        scanf("%d", &n);
        r = n;
        do
        {
            n--;
            printf("[%d] X [%d] ", r, n);
            r = r * n;
            printf("= [%d]\n", r);

        } while (n != 1);
        break;
    default:
        break;
    }
}

void cant_dig(void)
{
    int metodo;
    int dig = 0;
    int n;
    int r;
    int i;
    int x;
    printf("MENU DE CANTIDAD DE DIGITOS\n");
    printf("ESCOGE CON QUE TIPO DE CICLO SERA REALIZARA EL PROGRAMA\n");
    printf("[1-CICLO [FOR]]\n");
    printf("[2-CICLO [WHILE]]\n");
    printf("[3-CICLO [DO-WHILE]]\n");
    printf("CICLO: ");
    scanf("%d", &metodo);
    switch (metodo)
    {
    case 1:
        dig = 0;
        printf("INGRESE EL NUMERO DEL QUE DESEA SABER CUANTOS DIGITOS TIENE: ");
        scanf("%d", &n);
        x = n;
        for (i = 0; x > 0; i++)
        {
            r = n % 10;
            dig++;
            x = x / 10;
        }
        
        printf("EL NUMERO [%d]\n", n);
        printf("TIENES [%d] DIGITO/S\n", dig);

        break;
    case 2:
        printf("INGRESE EL NUMERO DEL QUE DESEA SABER CUANTOS DIGITOS TIENE: ");
        scanf("%d", &n);
        while (n != 0)
        {
            r = n % 10;
            dig++;
            n = n / 10;
        }

        printf("EL NUMERO [%d]\n", n);
        printf("TIENES [%d] DIGITO/S\n", dig);

        break;
    case 3:
        printf("INGRESE EL NUMERO DEL QUE DESEA SABER CUANTOS DIGITOS TIENE: ");
        scanf("%d", &n);
        do
        {
            r = n % 10;
            dig++;
            n = n / 10;
        } while (n != 0);

        printf("EL NUMERO [%d]\n", n);
        printf("TIENES [%d] DIGITO/S\n", dig);

        break;
    default:
        break;
    }
}