//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:19 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que sirva para calcular 3 calificaciones y despliegue el promedio
//MAPA_PE_ACT1_03.cpp
#include <stdio.h>
#include <stdlib.h>

float calif1;//variables donde almacenara las calificaciones del alumno
float calif2; 
float calif3;
float prome;//variable donde guardara el promedio mas adelante

main()
{
    printf("INGRESAR A CONTINUACION LA CALIFICACION DEL ALUMNO \n");
    printf("PRIMERA CALIFCACION: ");//lugar donde el usuario ingresara las calificaciones de los alumnos
    scanf("%f", &calif1);
    printf("SEGUNDA CALIFCACION: ");
    scanf("%f", &calif2);
    printf("TERCERA CALIFCACION: ");
    scanf("%f", &calif3);

    //operacion donde nos va a generar el promedio utilizando las calificaciones
    prome = (calif1 + calif2 + calif3)/3;

    //en cada if hay un rango de calificacion donde dependiendo del promedio
    //se correra solo aquella que cumpla totalmente la condicion deseada
    if(prome < 30)
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [REPETIR MATERIA]");
    }
    if((prome >= 30)&&(prome <60))
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [EXAMEN EXTRAORDINARIO]");
    }
    if((prome >= 60)&&(prome < 70))
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [SUFICIENTE PARA PASAR]");
    }
    if((prome >= 70)&&(prome <80))
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [REGULAR]");
    }
    if((prome >= 80)&&(prome < 90))
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [BIEN]");
    }
    if((prome >= 90)&&(prome < 98))
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [MUY BIEN]");
    }
    if((prome >= 98)&&(prome <=100))
    {
        printf("SU PROMEDIO FINAL ES DE: %0.2f", prome);
        printf(" [EXCELENTE]");
    }
    if(prome > 100)
    {
        printf("[ERROR, AL CALCULAR SU PROMEDIO]");
    }

    return 0;   
}