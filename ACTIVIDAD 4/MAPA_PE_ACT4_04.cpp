//MIGUEL ANGEL PORTILLO ATTWELL 370097
//FECHA:4 DE SEPTIEMBRE DEL 2023
//DESCRIPCION: Programa en C que sirva para calcular el salario semanal de un trabajador 
//donde se obtiene como dato de entrada las horas semanales trabajadas, el salario por hora.
//MAPA_PE_ACT4_04.cpp
#include <stdio.h>
#include <stdlib.h>

//Declaración de variables
int horasTrabajadas;
float salarioPorHora;
float salarioNormal = 0; 
float salarioExtra = 0;
float salarioTotal = 0;

int main() 
{
    //Solicitar datos de entrada al usuario
    printf("Ingrese el salario por hora: ");
    scanf("%f", &salarioPorHora);
    
    printf("Ingrese las horas trabajadas a la semana: ");
    scanf("%d", &horasTrabajadas);

    //Calcular salario normal y salario extra
    if (horasTrabajadas <= 40) 
    {
        salarioNormal = horasTrabajadas * salarioPorHora;
    } 
    else 
    {
        //Primeras 40 horas
        salarioNormal = 40 * salarioPorHora;
        int horasExtras = horasTrabajadas - 40;
        if (horasExtras <= 9) 
        {
            //Horas extra dobles
            salarioExtra = horasExtras * (2 * salarioPorHora);
        } 
        else 
        {
            //Primeras 9 horas dobles, luego triples
            salarioExtra = 9 * (2 * salarioPorHora) + (horasExtras - 9) * (3 * salarioPorHora);
        }
    }

    //Calcular salario total
    salarioTotal = salarioNormal + salarioExtra;

    //Mostrar resultados
    printf("\nSalario por hora: %.2f\n", salarioPorHora);
    printf("Horas Trabajadas: %d\n", horasTrabajadas);
    printf("Salario normal: %.2f\n", salarioNormal);
    printf("Salario extra: %.2f\n", salarioExtra);
    printf("Salario total: %.2f\n", salarioTotal);

    return 0;
}
