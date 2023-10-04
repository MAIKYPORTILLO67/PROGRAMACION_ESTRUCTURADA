//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:19 DE AGOSTO DEL 2023
//DESCRIPCION: Algoritmo que sirva para calcular el salario semanal de un trabajador
//MAPA_PE_ACT1_05.cpp
#include <stdio.h>
#include <stdlib.h>

int hrs;
int hrsex;
float salario;
float saltot;
float pago;
float pagoex;

int main()
{
    printf("Dame tus horas trabajadas: ");
    scanf("%d",&hrs);
    printf("¿Cuál es tu pago por hora?: ");
    scanf("%f",&pago);
    if (hrs <= 40)
    {
        salario = pago * 40;
        saltot = salario;
    }
    else
    {
        if (hrs == 49)
        {
            hrsex = hrs - 40;
            salario = pago * 40;
            pagoex = (hrsex * (pago * 2));
            saltot = salario + pagoex;
        }
        else
        {
            if (hrs >= 50)
            {
                hrsex = hrs - 40;
                salario = pago * 40;
                pagoex = (hrsex * (pago * 3));
                saltot = salario + pagoex;
            }
        }
    }

    printf("\nSalario por hora: %.2f \n",pago);
    printf("Horas trabajadas: %d \n",hrs);
    printf("Salario normal: %.2f \n",salario);
    printf("Salario extra: %.2f \n",pagoex);
    printf("Salario total: %.2f \n",saltot);

    return 0;
}