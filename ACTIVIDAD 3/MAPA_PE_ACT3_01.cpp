//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:1 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar 
//MAPA_PE_ACT3_01.cpp
#include <stdio.h>
#include <stdlib.h>

float calif1;//variables donde almacenara las calificaciones del alumno
float calif2; 
float calif3;
float prome;//variable donde guardara el promedio mas adelante

int main()
{
    printf("INGRESAR A CONTINUACION LA CALIFICACION DEL ALUMNO \n");
    printf("PRIMERA CALIFCACION: ");//lugar donde el usuario ingresara las calificaciones de los alumnos
    scanf("%f", &calif1);
    printf("SEGUNDA CALIFCACION: ");
    scanf("%f", &calif2);
    printf("TERCERA CALIFCACION: ");
    scanf("%f", &calif3);

    prome = (calif1 + calif2 + calif3)/3;//operacion donde nos va a generar el promedio utilizando las calificaciones

    //en cada if hay un rango de calificacion donde dependiendo del promedio
    //se correra solo aquella que cumpla totalmente la condicion deseada

    if (prome < 70)
    {
        if (prome < 60)
        {
            if (prome < 30)
            {
                printf("SU PROMEDIO ES DE [%0.2f]", prome);
                printf("[REPETIR]");
            }
            else
            {
                printf("SU PROMEDIO ES DE [%0.2f]", prome);
                printf("[EXTRAORDINARIO]");
            }
        }
        else
        {
            printf("SU PROMEDIO ES DE [%0.2f]", prome);
            printf("[SUFICIENTE]");
        }
    }
    else
    {
        if (prome > 80)
        {
            if (prome > 90)
            {
                if(prome > 98)
                {
                    if(prome > 100)
                    {
                        printf("SU PROMEDIO ES DE [%0.2f]", prome);
                        printf("[ERROR, AL CALCULAR EL PROMEDIO]");
                    }
                    else
                    {
                        printf("SU PROMEDIO ES DE [%0.2f]", prome);
                        printf("[EXCELENTE]");
                    }
                }
                else
                {
                    printf("SU PROMEDIO ES DE [%0.2f]", prome);
                    printf("[MUY BIEN]");
                }
            }
            else
            {
                printf("SU PROMEDIO ES DE [%0.2f]", prome);
                printf("[BIEN]");
            }
        }
        else
        {
            printf("SU PROMEDIO ES DE [%0.2f]", prome);
            printf("[REGULAR]");
        }
    }
    
    return 0;
}