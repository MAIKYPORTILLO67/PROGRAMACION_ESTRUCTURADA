#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//DATOS PARA Tmaiky
typedef struct Tmaiky
{
    int status;
    long matricula;
    char nombre[31];
    char apellido_pat[31];
    char apellido_mat[31];
    int edad;
    int sexo;

}Tmaiky;

int full_letters(char cadena[])
{
    int tam = strlen(cadena);
    int i;
    
    if (delete_space(cadena) == 0)
    {
        return 0;
    }
    for (i = 0; i <= tam; i++)
    {
        if(cadena[i] < 'A' || cadena[i] < 'z')
        {
            return -1;
        }
        if (cadena[i] < 'Z' && cadena[i] < 'a')
        {
            return -1;
        }
        return 0;
    }
    return 0;
}

int delete_space(char cadena[])
{
    int tam = strlen(cadena);
    int i;

    if (cadena[0] == '\0')
    {
        return 0;
    }
    for ( i = 0; i <= tam; i++)
    {
        if (cadena[i] == ' ' && cadena[i + 1] == ' ')
        {
            return -1;
        }
    }
    return 0;
}

int existeTmaiky(long matri, Tmaiky *reg, int tam)
{
    int i;
    for (i = 0; i <= tam; i++)
    {
        if (matri == reg[i].matricula)
        {
            return 1; 
        }
    }
    return 0; 
}

//FUNCIONES DE VALIDACION
void val_vect(int vector[])
{
    int i;
    int j;
    int dato;
    char band = 'F';
    printf("QUE NUMERO DESEAS BUSCAR?\n");
    scanf("%d", &dato);
    while (band == 'F' && i < 15)
    {
        if (vector[i] == dato)
        {
            band = 'V';
        }
        i++;
    }
    if (band == 'F')
    {
        printf("[ESE NUMERO NO EXISTE EN EL VECTOR]\n");
    }
    if (band == 'V')
    {
        printf("EL NUMERO HA SIDO ENCONTRADO EN LA POSICION: %d\n", i);
    }
}

int val_ent(int rang_inicial, int rang_final, const char sms[], const char sms_error[])
{
    int num;
    char x_num[30];

    do
    {
        puts(sms);
        fflush(stdin);
        gets(x_num);
        num = atoi(x_num);

        if(num < rang_inicial || num > rang_final)
        {
            printf("%s", sms_error);
        }
    } while (num < rang_inicial || num > rang_final);

    return num;
}

int val_matricula(long rang_inicial, long rang_final, const char sms[], const char sms_error[])
{
    int num;
    char x_num[30];

    do
    {
        puts(sms);
        fflush(stdin);
        gets(x_num);
        num = atoi(x_num);

        if(num < rang_inicial || num > rang_final)
        {
            printf("%s", sms_error);
        }
    } while (num < rang_inicial || num > rang_final);

    return num;
}

void val_cade(char cadena[], const char *mensage)
{
    int tam;
    int band = 1;

    do
    {
        printf("%s", mensage);
        fflush(stdin);
        gets(cadena);
        if (full_letters(cadena) == 0)
        {
            if (delete_space(cadena) == -1)
            {
                printf("[SIN ESPACIOS]\n");
                continue;
            }
            
        }
        else
        {
            if (cadena[0] == ' ')
            {
                printf("[SIN ESPACIOS]");
                continue;
            }
            else
            {
                printf("[INGRESAR SOLO LETRAS]");
                continue;
            }
        }
        
    } while (band == 1);
    
}

//FUNCIONES DE ORDENACION
void ord_vect(int vector[])
{
    int i;
    int j;
    int temp;
    printf("ESCOGISTE ORDENAR EL VECTOR\n");
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j + 1];
                vector[j + 1] = vector[j];
                vector[j] = temp;
            }
        }
    }
    for (i = 0; i < 15; i++)
    {
        printf("%d.-[%d]\n", i + 1, vector[i]);
    }
}

//FUNCIONES DE ORDENACION
int busqueda_secc(Tmaiky *registros, int tam, long matricula)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (registros[i].matricula == matricula)
        {
            return i;
        }
    }
    return -1;
}

void burbuja(Tmaiky vect[], int tam)
{
    system("CLS");
    int i, j;
    Tmaiky burbuja;
    for(i = 0; i < tam - 1; i++)
    {
        for(j = i + 1; j < tam; j++)
        {
            if (vect[j].matricula < vect[i].matricula)
            {
                burbuja = vect[j];
                vect[j] = vect[i];
                vect[i] = burbuja;            
            }
        }
    }

    system("PAUSE");
}

void quickSort(Tmaiky registros[], int limIzq, int limDer)
{
    int izq; 
    int der; 
    int tem;
    Tmaiky central;

    izq = limIzq;
    der = limDer;
    central.matricula = registros[(izq + der) / 2].matricula;

    do{

        while(registros[izq].matricula < central.matricula && izq < limDer)
        {
            izq++;
        }
        
        while(central.matricula < registros[der].matricula && der > limIzq)
        {
            der--;
        }

        if ( izq <= der)
        {
            tem = registros[izq].matricula;
            registros[izq].matricula = registros[der].matricula;
            registros[der].matricula = tem;
            izq++;
            der--;
        }
    }while(izq <= der);

    if (limIzq < der)
    {
        quickSort(registros, limIzq, der);
    }

    if (limDer > izq)
    {    
        quickSort(registros, izq, limDer);
    }
}

//MENU PARA LA PARCTICA
int add_r(Tmaiky registros[], int tam)
{
    int i;
    int band = 0;
    system("CLS");
    for (i = 0; i < 100; i++)
    { 
        system("CLS");
        registros[tam] = data_r(registros, tam);
        system("CLS");
        tam++;
    }
    printf("[HAS GENERADO LOS REGISTROS]");
    system("PAUSE");
    return tam;
}

Tmaiky data_r(Tmaiky registros[], int tam)
{
    Tmaiky reg;
    int status;
    long matricula;
    char *nombre;
    char *apellido;
    int edad;
    int sexo;

    char nom_hombre[][31] = {"Juan"};
    char nom_mujer[][31] = {"Maria"};
    char apellidop[][31] = {"Garcia", "Rodriguez", "Martínez", "Lopez", "Perez", "Fernandez", "Gonzalez", "Hernandez", "Sanchez", "Ramirez", "Torres", "Diaz", "Vargas", "Jimenez", "Ruiz", "Silva"};
    char apellidom[][31] = {"Garcia", "Rodriguez", "Martínez", "Lopez", "Perez", "Fernandez", "Gonzalez", "Hernandez", "Sanchez", "Ramirez", "Torres", "Diaz", "Vargas", "Jimenez", "Ruiz", "Silva"};
    int apellidopindex = rand() % 8;
    int apellidomindex = rand() % 8;

    matricula = (rand() % 99999) + 300000;
    while (existeTmaiky(matricula, registros, tam) == 1)
    {
        matricula = (rand() % 99999) + 300000;
    }
    
    edad = (rand() % 70) + 17;
    status = rand() % 2;
    sexo = rand() % 2; 

    reg.status = status;
    reg.matricula = matricula; 
    reg.edad = edad;
    reg.sexo = sexo;

    if (sexo == 1)
    {
        int nombreindex = rand() % 4;
        strcpy(reg.nombre, nom_hombre[nombreindex]);
    }
    else
    {
        int nombreindex = rand() % 4;
        strcpy(reg.nombre, nom_mujer[nombreindex]);
    }

    strcpy(reg.apellido_pat, apellidop[apellidopindex]);
    strcpy(reg.apellido_pat, apellidom[apellidomindex]);
    
    return reg;
}

int add_m(Tmaiky registros[], int tam)
{
    int op = 1;
    do
    {
        system("CLS");
        registros[tam] = data_m(registros, tam);
        system("CLS");
        tam++;
        op = val_ent(0,1,"[1.-AGREGAR UN NUEVO REGISTRO]\t[0.-SALIR]\nSELECCIONE UNA OPCION: ", "[OPCION NO VALIDA]");
    } while (op == 1);

    return tam;
}

Tmaiky data_m(Tmaiky registros[], int tam)
{
    Tmaiky reg;
    long matricula;
    char apellido_materno[21];
    char apellido_paterno[21]; 
    char nombre[41];

    do
    {
        reg.status = val_ent(0,1,"[0)USUARIO INACTIVO] [1)USUARIO ACTIVO]", "[OPCION INVALIDA]");
        matricula = val_matricula(300000,399999,"INGRESAR MATRICULA: ","[MATRICULA INVALIDA]");
        if (existeTmaiky(matricula, registros, tam) == 1)
        {
            printf("[MATRICULA YA EN USO]\n[INGRESAR UNA MATRICULA LIBRE]\n");
        }
    } while (existeTmaiky(matricula, registros, tam) == 1);
    
    reg.matricula = matricula; 

    val_cade(apellido_paterno, "INGRESAR APELLIDO PATERNO: ");
    strcpy(reg.apellido_pat, apellido_paterno);

    val_cade(apellido_materno, "INGRESAR APELLIDO MATERNO: ");
    strcpy(reg.apellido_mat, apellido_materno);

    val_cade(nombre, "INGRESAR NOMBRE: ");
    strcpy(reg.nombre, nombre);

    reg.edad = val_ent(17,70,"INGRESAR EDAD: ","[INGRESAR CORRECTAMENTE LA EDAD]");
    reg.sexo = val_ent(0,1,"INGRESE SU SEXO: ","[OPCION NO VALIDA]");

    return reg; 
}

int eliminar_reg(Tmaiky registros[], int tam)
{
    system("CLS");
    long id;
    int pos;
    int op;

    id = val_matricula(300000,399999,"INGRESAR LA MATRICULA A ELIMINAR: ","[MATRICULA INVALIDA]");
    pos = busqueda_secc(registros, tam, id);
    if (pos != -1)
    {
        imprimir_regs(registros, tam);
        op = val_ent(1,2,"[1)ELIMINAR]\t[2)NO ELIMINAR]","[OPCION NO VALIDA]");
        if (op == 1)
        {
            registros[pos].status = 0;
            printf("[EL REGISTRO FUE ELIMINADO CORRECTAMENTE]");
        }
        
    }
    else
    {
        printf("[MATRICULA INVALIDA]");
    }
    
}

int buscar_reg(Tmaiky registros[], int tam)
{
    system("CLS");
    long matricula;
    int pos;
    int id;
    int i;
    int band = 0;
    char *sexo;

    id = val_matricula(300000,399999,"INGRESAR LA MATRICULA A ELIMINAR: ","[MATRICULA INVALIDA]");
    pos = busqueda_secc(registros, tam, id);

    if (pos != -1)
    {
        system("CLS");
        printf("[DATOS ENCONTRADOS]\n%-10s %-14s %-15s %-20s %-20s %-10s %-10s\n","STATUS","MATRICULA","APPATERNO","APMATERNO","NOMBRE","EDAD","SEXO\n");
        if (registros[pos].sexo == 1)
        {
            sexo = "HOMBRE";
        }
        else
        {
            sexo = "MUJER";
        }
        if (registros[pos].matricula != -1 && registros[pos].matricula >= 300000 && registros[pos].matricula <= 399999)
        {
            printf("%-10d %-14ld %-15s %-20s %-20s %-10d %-10s\n",registros[pos].status, registros[pos].matricula, registros[pos].nombre, registros[pos].apellido_pat, registros[pos].apellido_mat, registros[pos].edad, registros[pos].sexo);
        }   
    }
    else
    {
        printf("[MATRICULA INVALIDA]");
    }
}

int ordenar_reg(Tmaiky registros[], int tam, int band)
{
    system("CLS");
    if (tam > 0)
    {
        if (band == 0)
        {
            burbuja(registros, tam);
            band = 1;
        }
        else
        {
            quickSort(registros, 0,tam);
        }
        printf("[DATOS ORDENADOS]");
        system("PAUSE");
        return band;
    }
    else
    {
        printf("[NO HAY DATOS]");
        system("PAUSE");
        return 0;
    }
    
}

int imprimir_regs(Tmaiky registros[], int tam)
{   
    system("CLS");
    Tmaiky reg;
    int i;
    char *sexo;

    if (tam > 0)
    {
        printf("%-10s %-14s %-15s %-20s %-20s %-10s %-10s\n","STATUS","MATRICULA","APPATERNO","APMATERNO","NOMBRE","EDAD","SEXO\n");
        for (i = 0; i < tam; i++)
        {
            if (registros[i].sexo == 1)
            {
                sexo = "HOMBRE";
            }
            else
            {
                sexo = "MUJER";
            }
            if (registros[i].matricula != -1 && registros[i].matricula >= 300000 && registros[i].matricula <= 399999)
            {
                printf("%-10d %-14ld %-15s %-20s %-20s %-10d %-10s\n",registros[i].status, registros[i].matricula, registros[i].nombre, registros[i].apellido_pat, registros[i].apellido_mat, registros[i].edad, registros[i].sexo);
            }   
        }
    }
    else
    {
        printf("[MATRICULA INVALIDA]");
    }
    printf("\n");
    system("PAUSE");
}