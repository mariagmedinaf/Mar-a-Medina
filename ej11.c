#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre [10];
    int edad;
};
int main()
{
    struct Persona personas[3];

    printf("Por favor, escriba un nombre:");
    scanf ("%s", personas[0].nombre);
    printf("\n");
    
    printf("Por favor, escriba su edad:");
    scanf ("%d", &personas[0].edad);
    printf("\n");
    
    printf("Por favor, escriba un nombre:");
    scanf ("%s", personas[1].nombre);
    printf("\n");
    
    printf("Por favor, escriba su edad:");
    scanf ("%d", &personas[1].edad);
    printf("\n");

    printf("Por favor, escriba un nombre:");
    scanf ("%s", personas[2].nombre);
    printf("\n");
    
    printf("Por favor, escriba su edad:");
    scanf ("%d", &personas[2].edad);
    printf("\n");

    printf("Las personas mayores de edad son: \n");
    // Un bucle que recorra el array
    int i;                              
    for (i=0; i<3;i++){
        // Para cada iteración del array, comprobar la edad y si es mayor o igual de 18, imprimir el nombre
        if(personas[i].edad>=18){
            printf("%s\n", personas[i].nombre);
        }
    }
    
    return 0
