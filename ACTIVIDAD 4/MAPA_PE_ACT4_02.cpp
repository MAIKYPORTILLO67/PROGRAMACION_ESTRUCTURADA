//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:4 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Programa en C que use un menú para realizar conversiones de unidades de medida, 
//donde el usuario selecciona una opción y realizará la opción según sea su selección del menú.
//MAPA_PE_ACT4_02.cpp
#include <stdio.h>
#include <stdlib.h>

int conversion;
float med;
float resultado;

int main()
{
    printf("MENU\n");
    printf("INGRESAR CON UN DIGITO LA ACCION QUE QUIERA EJECUTAR\n");
    printf("[1-CENTIMETROS A PULGADAS-1][2-CENTIMETROS A PIES-2][3-KILOMETROS A MILLAS-3]");
    printf("[4-PULGADAS A CENTIMETROS-4][5-PIES A CENTIMETROS-5][6-MILLAS A KILOMETROS-6]");
    scanf("%d", &conversion);
    printf("INGRESE LA PRIMER MEDIDA: ");
    scanf("%f", &med);

    switch (conversion)
    {
    case 1:
        printf("INGRESE LA MEDIDA CENTIMETROS: ");
        scanf("%f", &med);
        resultado = med / 2.54;
        printf("LA CONVERSION CENTIMETROS A PULGADAS CON LA MEDIDA [%f] ES: [%f]", med, resultado);
        break;
    case 2:
        printf("INGRESE LA MEDIDA CENTIMETOS: ");
        scanf("%f", &med);
        resultado = med / 30.48;
        printf("LA CONVERSION CENTIMETROS A PIES CON LA MEDIDA [%f] ES: [%f]", med, resultado);
        break;
    case 3:
        printf("INGRESE LA MEDIDA EN KILOMETROS: ");
        scanf("%f", &med);
        resultado = med / 1.609;
        printf("LA CONVERSION KILOMETROS A MILLAS CON LA MEDIDA [%f] ES: [%f]", med, resultado);
        break;
    case 4:
        printf("INGRESE LA MEDIDA EN PULGADAS: ");
        scanf("%f", &med);
        resultado = med * 2.54;
        printf("LA CONVERSION A PULGADAS A CENTIMETROS CON LA MEDIDA [%f] ES: [%f]", med, resultado);
        break;
    case 5:
        printf("INGRESE LA MEDIDA EN PIES: ");
        scanf("%f", &med);
        resultado = med * 30.48;
        printf("LA CONVERSION PIES A CENTIMETROS CON LA MEDIDA [%f] ES: [%f]", med, resultado);
        break;
    case 6:
        printf("INGRESE LA MEDIDA MILLAS: ");
        scanf("%f", &med);
        resultado = med * 1.609;
        printf("LA CONVERSION MILLAS A KILOMETROS CON LA MEDIDA [%f] ES: [%f]", med, resultado);
        break;
    default:
        printf("LA CONVERSION QUE INGRESO CON EL DIGITO NO ESTA DISPONIBLE.");
        break;
    }

    return 0;
}