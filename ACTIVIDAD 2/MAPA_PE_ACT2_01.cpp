//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:25 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que lea 4 calificaciones de un alumno, calcular y desplegar el promedio 
//acompañado de la leyenda APROBADO o REPROBADO
//MAPA_PE_ACT2_01.cpp
#include <stdio.h>
#include <stdlib.h>

float calif1;//variables donde almacenara las calificaciones del alumno
float calif2; 
float calif3;
float calif4;
float prome;//variable donde guardara el promedio mas adelante

int main()
{
    printf("INGRESAR A CONTINUACION LA CALIFICACION DEL ALUMNO \n");
    printf("PRIMERA CALIFICACION: ");//lugar donde el usuario ingresara las calificaciones de los alumnos
    scanf("%f", &calif1);
    printf("SEGUNDA CALIFICACION: ");
    scanf("%f", &calif2);
    printf("TERCERA CALIFICACION: ");
    scanf("%f", &calif3);
    printf("CUARTA CALIFICACION: ");
    scanf("%f", &calif4);
    //operacion donde nos va a generar el promedio utilizando las calificaciones
    prome = (calif1 + calif2 + calif3 + calif4)/4;

    //dependiendo del promedio de la calificacion 
    //se correra solo aquella que cumpla totalmente la condicion deseada
    if(prome < 60)
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [REPROBADO]");
    }
    if(prome >= 60)
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [APROBADO]");
    }

    return 0;
}