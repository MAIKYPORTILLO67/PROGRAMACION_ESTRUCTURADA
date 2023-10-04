//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:4 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: En la materia programación estructurada se aplican 5 exámenes, calcular el promedio final de la 
//materia donde la calificación menor de los exámenes se anula y el promedio se calcula en base a 4 exámenes.
//MAPA_PE_ACT4_07.cpp
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaración de variables
    float calificaciones[5];
    float suma = 0, promedio;
    float calificacionMenor = 101; // Inicializar con un valor alto para encontrar la calificación menor

    // Solicitar las calificaciones de los 5 exámenes al usuario
    printf("Ingrese las calificaciones de los 5 exámenes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Examen %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        
        // Encontrar la calificación más baja
        if (calificaciones[i] < calificacionMenor) {
            calificacionMenor = calificaciones[i];
        }

        suma += calificaciones[i];
    }

    // Calcular el promedio final anulando la calificación más baja
    promedio = (suma - calificacionMenor) / 4.0;

    // Mostrar el promedio final
    printf("\nPromedio final de la materia (anulando la calificación más baja): %.2f\n", promedio);

    return 0;
}
