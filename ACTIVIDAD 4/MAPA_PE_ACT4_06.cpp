//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:4 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Programa en C que sirva para calcular el Total a pagar por consumo de agua, 
//donde el dato de entrada son los M3 de agua consumidos
//MAPA_PE_ACT4_06.cpp
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaración de variables
    float m3Consumidos, subtotal, iva, totalPagar;

    // Solicitar datos de entrada al usuario
    printf("Ingrese la cantidad de M3 de agua consumidos: ");
    scanf("%f", &m3Consumidos);

    // Calcular el total a pagar según los rangos de tarifas
    if (m3Consumidos <= 4) {
        subtotal = 50.0;
    } else if (m3Consumidos <= 15) {
        subtotal = 50.0 + (m3Consumidos - 4) * 8.0;
    } else if (m3Consumidos <= 50) {
        subtotal = 50.0 + (15 - 4) * 8.0 + (m3Consumidos - 15) * 10.0;
    } else {
        subtotal = 50.0 + (15 - 4) * 8.0 + (50 - 15) * 10.0 + (m3Consumidos - 50) * 11.0;
    }

    // Calcular el IVA (16%)
    iva = 0.16 * subtotal;

    // Calcular el total a pagar
    totalPagar = subtotal + iva;

    // Mostrar resultados
    printf("\nDetalle de la factura de agua:\n");
    printf("Consumo de agua (M3): %.2f\n", m3Consumidos);
    printf("Subtotal: $%.2f\n", subtotal);
    printf("IVA (16%%): $%.2f\n", iva);
    printf("Total a pagar: $%.2f\n", totalPagar);

    return 0;
}

