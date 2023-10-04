//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:4 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Programa en C que sirva para desplegar el Total de una llamada telefónica 
//donde se pide como datos de entrada los minutos y el tipo de llamada, se cobra de la siguiente manera
//MAPA_PE_ACT4_05.cpp
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaración de variables
    int minutos, tipoLlamada;
    float costo, subtotal, iva, total;

    // Solicitar datos de entrada al usuario
    printf("Ingrese la duración de la llamada en minutos: ");
    scanf("%d", &minutos);

    printf("Seleccione el tipo de llamada:\n");
    printf("1. Llamada Local ($3.00 sin límite de tiempo)\n");
    printf("2. Llamada Nacional ($7.00 por los 3 primeros minutos y $2.00 por minuto adicional)\n");
    printf("3. Llamada Internacional ($9.00 por los 2 primeros minutos y $4.00 por minuto adicional)\n");
    printf("Elija una opción (1/2/3): ");
    scanf("%d", &tipoLlamada);

    // Calcular el costo de la llamada según el tipo seleccionado
    switch (tipoLlamada) {
        case 1: // Llamada Local
            costo = 3.00;
            break;
        case 2: // Llamada Nacional
            if (minutos <= 3) {
                costo = 7.00;
            } else {
                costo = 7.00 + (minutos - 3) * 2.00;
            }
            break;
        case 3: // Llamada Internacional
            if (minutos <= 2) {
                costo = 9.00;
            } else {
                costo = 9.00 + (minutos - 2) * 4.00;
            }
            break;
        default:
            printf("Opción no válida. Por favor, seleccione una opción válida (1/2/3).\n");
            return 1; // Salir del programa con un código de error
    }

    // Calcular el subtotal, el IVA (16%) y el total
    subtotal = costo;
    iva = 0.16 * subtotal;
    total = subtotal + iva;

    // Mostrar resultados
    printf("\nDetalle de la llamada:\n");
    printf("Duración de la llamada: %d minutos\n", minutos);
    printf("Tipo de llamada: ");
    switch (tipoLlamada) {
        case 1:
            printf("Llamada Local\n");
            break;
        case 2:
            printf("Llamada Nacional\n");
            break;
        case 3:
            printf("Llamada Internacional\n");
            break;
    }
    printf("Costo de la llamada: $%.2f\n", costo);
    printf("Subtotal: $%.2f\n", subtotal);
    printf("IVA (16%%): $%.2f\n", iva);
    printf("Total: $%.2f\n", total);

    return 0;
}
