//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:19 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que sirva para calcular el volumen de un cilindro
//MAPA_PE_ACT1_01.cpp
#include <stdio.h>
#include <stdlib.h>

float rad;//variable para almacenar el valor del radio de un cilindro
float alt;//variable para almacenar el valor de la altura de un cilindro
float vol;//variable que almacenara el valor del volumen despues de realizar la operacion correspondiente
float pi = 3.1416;//variable que manejara el valor de pi 

main()
{
  printf("CALCULAR VOLUMEN DEL CILINDRO \n");
  printf("INGRESAR EL VALOR DEL RADIO DEL CILINDRO:");//el ususario ingresara el valor del radio
  scanf("%f",&rad);
  printf("INGRESAR EL VALOR DE LA ALTURA DE UN CILINDRO:");//el ususario ingresara el valor del altura
  scanf("%f",&alt);

  vol = (pi * (rad * rad)) * alt;//operacion donde se obtendra el volumen del cilindro

  printf("EL VALOR DEL VOLUMEN DE SU CILINDRO ES: %0.2f", vol);//parte final donde entregara el resultado del volumen

  return 0;
}