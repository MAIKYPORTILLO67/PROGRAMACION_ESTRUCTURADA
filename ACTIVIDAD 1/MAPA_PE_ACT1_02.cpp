//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:19 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que sirva para calcular cuanto pasto y alambre se ocupara para un terreno y cuanto costara.
//MAPA_PE_ACT1_02.cpp
#include <stdio.h>
#include <stdlib.h>

int metcua;//variable donde se almacena la medida del terreno del usuario
int metalam;//variable donde se alamcena la medida del alambre necesario
float prepasto = 35.40;//variable donde se almacena el costo del pasto 
float prealambre;//variable donde se almacenara el costo del alambre 
float costpasto;//variable donde se almacenara el costo total del pasto
float costalambre;//variable donde se almacenara el costo total del alambre


main()
{
    printf("CALCULO VENTA DE MATERIAL \n");
    printf("INGRESAR EN METROS CUADRADOS EL TAMAÑO DE SU TERRENO: ");//el usuario ingresara los metros de su terreno
    scanf("%d", &metcua);
    printf("INGRESAR CUANTOS METROS ACUPARA DE ALAMBRE: ");//el usuario ingresara los metros de alambre a ocupar
    scanf("%d", &metalam);
    printf("INGRESAR EL COSTO POR METRO DE ALAMBRE: ");//se ingresara el costo del alambre por metro
    scanf("%f", &prealambre);

    costpasto = metcua * prepasto;//operacion donde se obtendra el costo de pasto total
    costalambre = metalam * prealambre;//operacion donde se obtendra costo de alambre total

    printf("SON %d METROS DE PASTO CON UN COSTO TOTAL DE: %0.2f \n", metcua, costpasto);//se entregan la cantidad de metros a ocupar y los costos finales
    printf("SON %d METROS DE ALAMBRE CON UN COSTO TOTAL DE: %0.2f", metalam, costalambre);

    return 0;
}