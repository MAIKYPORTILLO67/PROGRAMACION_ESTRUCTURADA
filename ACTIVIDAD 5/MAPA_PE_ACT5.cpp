// MIGUEL ANGEL PORTILLO ATTWELL 370097
// FECHA: 10 DE SEPTIEMBRE DEL 2023
// DESCRIPCION: PROGRAMA QUE MANEJE UN ESQUELETE DE SELECCION MULTIPLE 
// QUE FUNCIONE A BASE DE ACTIVIDADES FORMADAS POR FUNCIONES
// MAPA_PE_ACT5.cpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int act;

void menu(void);
void califi_alumno(void);
void chicha_ani(void);
void chicha_multi(void);
void num_mayor(void);
void num_med(void);
void num_asce(void);
void sig_zog(void);

int main()
{
    menu();

    return 0;
}

void menu()
{
    do
    {
        printf("\n");
        printf("M  E  N  U\n");
        printf("[1-CALIFICACIONES]\n");
        printf("[2-CHINCHAPU ANIDADO]\n");
        printf("[3-CHINCHAPU MULTI]\n");
        printf("[4-NUMERO MAYOR]\n");
        printf("[5-NUMERO DEL MEDIO]\n");
        printf("[6-NUMEROS ASCENDENTES]\n");
        printf("[7-SIGNO ZODIACAL]\n");
        printf("[0-SALIR]\n");
        printf("ACTIVIDAD: ");
        scanf("%d", &act);
        switch (act)
        {
        case 1:
            califi_alumno();
            break;
        case 2:
            chicha_ani();
            break;
        case 3:
            chicha_multi();
            break;
        case 4:
            num_mayor();
            break;
        case 5:
            num_med();
            break;
        case 6:
            num_asce();
            break;
        case 7:
            sig_zog();
            break;

        default:
            printf("GRACIAS POR UTILIZAR EL PROGRAMA\n");
            printf("VUELVA PRONTO");
            break;
        }
    } while (act != 0);
}

void califi_alumno(void)
{
    float cali1;
    float cali2;
    float cali3;
    float prome;

    printf("\n");
    printf("CALIFICACIONES ALUMNOS\n");
    printf("INGRESAR A CONTINUACION LA CALIFICACIONES DEL ALUMNO \n");
    printf("INGRESAR LA PRIMERA CALIFICACION: ");
    scanf("%f", &cali1);
    printf("INGRESAR LA SEGUNDA CALIFICACION: ");
    scanf("%f", &cali2);
    printf("INGRESAR LA TERCERA CALIFICACION: ");
    scanf("%f", &cali3);
    printf("\n");

    prome = (cali1 + cali2 + cali3) / 3;

    if (prome > 70)
    {
        if (prome > 60)
        {
            if (prome < 30)
            {
                printf("SU PROMEDIO ES: [%0.2f]", prome);
                printf("[REPETIR]");
                printf("\n");
            }
            else
            {
                printf("SU PROMEDIO ES: [%0.2f]", prome);
                printf("[EXTRAORDINARIO]");
                printf("\n");
            }
        }
        else
        {
            printf("SU PROMEDIO ES: [%0.2f]", prome);
            printf("[SUFICIENTE]");
            printf("\n");
        }
    }
    else
    {
        if (prome > 80)
        {
            if (prome > 90)
            {
                if (prome > 98)
                {
                    if (prome > 100)
                    {
                        printf("SU PROMEDIO ES: [%0.2f]", prome);
                        printf("[ERROR, AL CALCULAR EL PROMEDIO]");
                        printf("\n");
                    }
                    else
                    {
                        printf("SU PROMEDIO ES: [%0.2f]", prome);
                        printf("[EXCELENTE]");
                        printf("\n");
                    }
                }
                else
                {
                    printf("SU PROMEDIO ES: [%0.2f]", prome);
                    printf("[MUY BIEN]");
                    printf("\n");
                }
            }
            else
            {
                printf("SU PROMEDIO ES: [%0.2f]", prome);
                printf("[BIEN]");
                printf("\n");
            }
        }
        else
        {
            printf("SU PROMEDIO ES: [%0.2f]", prome);
            printf("[REGULAR]");
            printf("\n");
        }
    }
}

void chicha_ani(void)
{
    int jugada;
    int jugada_cpu;

    printf("\n");
    printf("CHINCHAPU ANIDADO\n");
    printf("[1-PIEDRA]\n");
    printf("[2-PAPEL]\n");
    printf("[3-TIJERA]\n");
    printf("\n");
    scanf("%d", &jugada);
    srand(time(NULL));
    jugada_cpu = rand() % 3;

    if (jugada == 1)
    {
        if (jugada_cpu == 0)
        {
            printf("JUGADOR = [PIEDRA]");
            printf("\n");
            printf("CPU = [PIEDRA]");
            printf("\n");
            printf("RESULTADOS = [EMPATE]");
        }
        if (jugada_cpu == 1)
        {
            printf("JUGADOR = [PIEDRA]");
            printf("\n");
            printf("CPU = [PAPEL]");
            printf("\n");
            printf("RESULTADOS = [PIERDES]");
        }
        if (jugada_cpu == 2)
        {
            printf("JUGADOR = [PIEDRA]");
            printf("\n");
            printf("CPU = [TIJERA]");
            printf("\n");
            printf("RESULTADOS = [GANASTE]");
        }
    }
    else
    {
        if (jugada == 2)
        {
            if (jugada_cpu == 0)
            {
                printf("JUGADOR = [PAPEL]");
                printf("\n");
                printf("CPU = [PIEDRA]");
                printf("\n");
                printf("RESULTADOS = [GANASTE]");
            }
            if (jugada_cpu == 1)
            {
                printf("JUGADOR = [PAPEL]");
                printf("\n");
                printf("CPU = [PAPEL]");
                printf("\n");
                printf("RESULTADOS = [EMPATE]");
            }
            if (jugada_cpu == 2)
            {
                printf("JUGADOR = [PAPEL]");
                printf("\n");
                printf("CPU = [TIJERA]");
                printf("\n");
                printf("RESULTADOS = [PIERDES]");
            }
        }
        else
        {
            if (jugada_cpu == 0)
            {
                printf("JUGADOR = [TIJERA]");
                printf("\n");
                printf("CPU = [PIEDRA]");
                printf("\n");
                printf("RESULTADOS = [PIERDES]");
            }
            if (jugada_cpu == 1)
            {
                printf("JUGADOR = [TIJERA]");
                printf("\n");
                printf("CPU = [PAPEL]");
                printf("\n");
                printf("RESULTADOS = [GANASTE]");
            }
            if (jugada_cpu == 2)
            {
                printf("JUGADOR = [TIJERA]");
                printf("\n");
                printf("CPU = [TIJERA]");
                printf("\n");
                printf("RESULTADOS = [EMPATE]");
            }
        }
    }
}

void chicha_multi(void)
{
    int jugada;
    int jugada_cpu;

    printf("\n");
    printf("CHINCHAPU MULTIPLE\n");
    printf("[1-PIEDRA]\n");
    printf("[2-PAPEL]\n");
    printf("[3-TIJERA]\n");
    printf("\n");
    scanf("%d", &jugada);

    switch (jugada)
    {
    case 1:
        srand(time(NULL));
        jugada_cpu = rand() % 3;
        if (jugada_cpu == 0)
        {
            printf("JUGADOR = [PIEDRA]");
            printf("\n");
            printf("CPU = [PIEDRA]");
            printf("\n");
            printf("RESULTADOS = [EMPATE]");
        }
        if (jugada_cpu == 1)
        {
            printf("JUGADOR = [PIEDRA]");
            printf("\n");
            printf("CPU = [PAPEL]");
            printf("\n");
            printf("RESULTADOS = [PIERDES]");
        }
        if (jugada_cpu == 2)
        {
            printf("JUGADOR = [PIEDRA]");
            printf("\n");
            printf("CPU = [TIJERA]");
            printf("\n");
            printf("RESULTADOS = [GANASTE]");
        }
        break;
    case 2:
        srand(time(NULL));
        jugada_cpu = rand() % 3;
        if (jugada_cpu == 0)
        {
            printf("JUGADOR = [PAPEL]");
            printf("\n");
            printf("CPU = [PIEDRA]");
            printf("\n");
            printf("RESULTADOS = [GANASTE]");
        }
        if (jugada_cpu == 1)
        {
            printf("JUGADOR = [PAPEL]");
            printf("\n");
            printf("CPU = [PAPEL]");
            printf("\n");
            printf("RESULTADOS = [EMPATE]");
        }
        if (jugada_cpu == 2)
        {
            printf("JUGADOR = [PAPEL]");
            printf("\n");
            printf("CPU = [TIJERA]");
            printf("\n");
            printf("RESULTADOS = [PIERDES]");
        }
        break;
    case 3:
        srand(time(NULL));
        jugada_cpu = rand() % 3;
        if (jugada_cpu == 0)
        {
            printf("JUGADOR = [TIJERA]");
            printf("\n");
            printf("CPU = [PIEDRA]");
            printf("\n");
            printf("RESULTADOS = [PIERDES]");
        }
        if (jugada_cpu == 1)
        {
            printf("JUGADOR = [TIJERA]");
            printf("\n");
            printf("CPU = [PAPEL]");
            printf("\n");
            printf("RESULTADOS = [GANASTE]");
        }
        if (jugada_cpu == 2)
        {
            printf("JUGADOR = [TIJERA]");
            printf("\n");
            printf("CPU = [TIJERA]");
            printf("\n");
            printf("RESULTADOS = [EMPATE]");
        }
        break;

    default:
        printf("ESA JUGADA NO SE ENCUENTRA DISPONIBLE\n");
        printf("INGRESA UNA DE LAS 3 OPCIONES.");
        break;
    }
}

void num_mayor(void)
{
    int num1;
    int num2;
    int num3;

    printf("\n");
    printf("NUMERO MAYOR\n");
    printf("INGRESAR LO SOLICITADO A CONTINUACION\n");
    printf("INGRESAR EL PRIMER NUMERO: ");
    scanf("%d", &num1);
    printf("INGRESAR EL SEGUNDO NUMERO: ");
    scanf("%d", &num2);
    printf("INGRESAR EL TERCER NUMERO: ");
    scanf("%d", &num3);
    printf("\n");

    if ((num3 < num1) && (num2 < num1) && (num3 < num2))
    {
        printf("EL NUMERO MAYOR ES: [%d]\n", num1);
    }
    if ((num1 < num3) && (num2 < num3) && (num1 < num2))
    {
        printf("EL NUMERO MAYOR ES: [%d]\n", num3);
    }
    if ((num1 < num2) && (num3 < num2) && (num1 < num3))
    {
        printf("EL NUMERO MAYOR ES: [%d]\n", num2);
    }
    if ((num2 < num1) && (num3 < num1) && (num2 < num3))
    {
        printf("EL NUMERO MAYOR ES: [%d]\n", num1);
    }
    if ((num2 < num3) && (num1 < num3) && (num2 < num1))
    {
        printf("EL NUMERO MAYOR ES: [%d]\n", num3);
    }
    if ((num3 < num2) && (num1 < num2) && (num3 < num1))
    {
        printf("EL NUMERO MAYOR ES: [%d]\n", num2);
    }
    if ((num1 == num2) && (num2 == num3) && (num1 == num3))
    {
        printf("TODOS LOS NUMEROS SON IGUALES Y SON: [%d]", num1);
        printf("POR FAVOR, INGRESA NUMEROS DIFERENTES.");
    }
}

void num_med(void)
{
    int num1;
    int num2;
    int num3;

    printf("\n");
    printf("NUMERO DEL MEDIO\n");
    printf("INGRESAR LO SOLICITADO A CONTINUACION\n");
    printf("INGRESAR EL PRIMER NUMERO: ");
    scanf("%d", &num1);
    printf("INGRESAR EL SEGUNDO NUMERO: ");
    scanf("%d", &num2);
    printf("INGRESAR EL TERCER NUMERO: ");
    scanf("%d", &num3);
    printf("\n");

    if ((num3 < num1) && (num2 < num1) && (num3 < num2))
    {
        printf("EL NUMERO DEL MEDIO ES: [%d]\n", num2);
    }
    if ((num1 < num3) && (num2 < num3) && (num1 < num2))
    {
        printf("EL NUMERO DEL MEDIO ES: [%d]\n", num2);
    }
    if ((num1 < num2) && (num3 < num2) && (num1 < num3))
    {
        printf("EL NUMERO DEL MEDIO ES: [%d]\n", num3);
    }
    if ((num2 < num1) && (num3 < num1) && (num2 < num3))
    {
        printf("EL NUMERO DEL MEDIO ES: [%d]\n", num3);
    }
    if ((num2 < num3) && (num1 < num3) && (num2 < num1))
    {
        printf("EL NUMERO DEL MEDIO ES: [%d]\n", num1);
    }
    if ((num3 < num2) && (num1 < num2) && (num3 < num1))
    {
        printf("EL NUMERO DEL MEDIO ES: [%d]\n", num1);
    }
    if ((num1 == num2) && (num2 == num3) && (num1 == num3))
    {
        printf("TODOS LOS NUMEROS SON IGUALES Y SON: [%d]", num1);
        printf("POR FAVOR, INGRESA NUMEROS DIFERENTES.");
    }
}

void num_asce(void)
{
    int num1;
    int num2;
    int num3;

    printf("\n");
    printf("NUMEROS ASCENDENTES\n");
    printf("INGRESAR LO SOLICITADO A CONTINUACION\n");
    printf("INGRESAR EL PRIMER NUMERO: ");
    scanf("%d", &num1);
    printf("INGRESAR EL SEGUNDO NUMERO: ");
    scanf("%d", &num2);
    printf("INGRESAR EL TERCER NUMERO: ");
    scanf("%d", &num3);
    printf("\n");

    if ((num3 < num1) && (num2 < num1) && (num3 < num2))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num3);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num1);
    }
    if ((num1 < num3) && (num2 < num3) && (num1 < num2))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num3);
    }
    if ((num1 < num2) && (num3 < num2) && (num1 < num3))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num3);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num2);
    }
    if ((num2 < num1) && (num3 < num1) && (num2 < num3))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num3);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num1);
    }
    if ((num2 < num3) && (num1 < num3) && (num2 < num1))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num3);
    }
    if ((num3 < num2) && (num1 < num2) && (num3 < num1))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num3);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num2);
    }
    if ((num1 == num2) && (num2 == num3) && (num1 == num3))
    {
        printf("TODOS LOS NUMEROS SON IGUALES Y SON: [%d]", num1);
    }
    if ((num1 > num2) && (num1 > num3) && (num2 == num3))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num3);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num1);
    }
    if ((num2 > num1) && (num2 > num3) && (num1 == num3))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num3);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num2);
    }
    if ((num3 > num1) && (num3 > num2) && (num2 == num1))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num3);
    }
    if ((num1 < num2) && (num1 < num3) && (num2 == num3))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num3);
    }
    if ((num2 < num1) && (num2 < num3) && (num1 == num3))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num1);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num3);
    }
    if ((num3 < num1) && (num3 < num2) && (num2 == num1))
    {
        printf("EL PRIMER NUMERO ES: [%d]\n", num3);
        printf("\n");
        printf("EL SEGUNDO NUMERO ES: [%d]\n", num2);
        printf("\n");
        printf("EL TERCER NUMERO ES: [%d]\n", num1);
    }
}

void sig_zog(void)
{
    int mes, dia;

    printf("\n");
    printf("SIGNO ZODIACAL\n");
    printf("INGRESAR LOS DATOS SOLICITADOS A CONTINUACION\n");

    // Solicita al usuario el mes de nacimiento
    printf("INGRESAR EL MES DE NACIMIENTO (1-12): ");
    scanf("%d", &mes);

    // Verifica que el mes esté en un rango válido
    if (mes < 1 || mes > 12)
    {
        printf("MES DE NACIMIENTO INVALIDO.\n");
    }

    // Solicita al usuario el día de nacimiento
    printf("INGRESAR EL DIA DE NACIMIENTO (1-31): ");
    scanf("%d", &dia);
    printf("\n");

    // Verifica que el día esté en un rango válido
    if (dia < 1 || dia > 31)
    {
        printf("DIA DE NACIMIENTO INVALIDO.\n");
    }

    // Determina el signo del zodiaco
    char *signo;
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
    {
        signo = "ARIES";
    }
    if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
    {
        signo = "TAURO";
    }
    if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
    {
        signo = "GEMINIS";
    }
    if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
    {
        signo = "CANCER";
    }
    if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
    {
        signo = "LEO";
    }
    if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
    {
        signo = "VIRGO";
    }
    if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
    {
        signo = "LIBRA";
    }
    if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
    {
        signo = "ESCORPIO";
    }
    if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
    {
        signo = "SAGITARIO";
    }
    else
    {
        signo = "CAPRICORNIO";
    }

    printf("TU SIGNO DEL ZODIACO ES %s.\n", signo);
}