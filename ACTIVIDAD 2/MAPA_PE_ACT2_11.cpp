//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:25 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que sirva para desplegar el Total de una llamada telefónica donde se pide
//como datos de entrada los ​ minutos​ y el ​ tipo de llamada​ 
//MAPA_PE_ACT2_01.cpp
#include <stdio.h>
#include <stdlib.h>

int op,min;
float subtotal,iva,total;

int main()
{
    printf("Seleccione un tipo de llamada: ");
    printf("\n1.Local $3.00");
    printf("\n2.Nacional $7.00");
    printf("\n3.Interncaional $9.00");
    printf("\nElige: ");
    scanf("%d",&op);
    printf("Ingrese la cantidad de minutos: ");
    scanf("%d",&min);

    if (op==1)
    {
        subtotal = 3;
        iva = 3 * 0.16;
        total = subtotal + iva;
    }
    else
    {
        if (op==2)
        {
        subtotal = 7 + ((min-3) * 2);
        iva = subtotal * 0.16;
        total = subtotal + iva;
        }
        else
        {
            if (op==3)
            {
            subtotal = 9 + ((min-2) * 4);
            iva = subtotal * 0.16;
            total = subtotal + iva;
            }
            else
            {
                printf ("\nOpcion no valida");
                return 0;
            }
        }
    }
    printf("Subtotal: %.2f \n",subtotal);
    printf("IVA: %.2f \n",iva);
    printf("Total: %.2f \n",total);
}