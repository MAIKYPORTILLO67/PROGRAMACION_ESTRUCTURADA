//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:19 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
//MAPA_PE_ACT1_04.cpp
#include <stdio.h>
#include <stdlib.h>

int num1; 
int num2;
int num3;

main()
{
    printf("Hola buenas tardes usuario \n");
    printf("Por favor ingresa el numero uno \n");
    scanf("%d", &num1);
    printf("Por favor ingresa el numero dos \n");
    scanf("%d", &num2);
    printf("Por favor ingresa el numero tres \n");
    scanf("%d", &num3);

    //condicion de n1
    if((num1 > num2)&&(num1 > num3)||(num1 < num2)&&(num1 > num3))
    {
    printf("El numero internedio es: %d",num1);
    } 

     //condicion de n2
    if((num2 > num1)&&(num2 < num3)||(num2 < num1)&&(num2 > num3))
    {
    printf("El numero internedio es: %d",num2);
    } 

     //condicion de n3
    if((num3 > num1)&&(num3 < num2)||(num3 < num1)&&(num3 > num2))
    {
    printf("El numero internedio es: %d",num3);
    }  

    return 0;
}