#include <stdio.h>
#include <string.h>

int main()
{
    int tam;
    printf("Por favor, introduzca el numero de letras:");
    scanf ( "%d", &tam);
    printf("\n");

    char palabra[20];
    printf("Introduzca la palabra para invertir: ");
    scanf("%s", palabra);
    char palabra_invertida[20];
    
    //strcpy (palabra_invertida, palabra);
    int i=tam;
    for (i=tam; i>0; i--) {                    
        palabra_invertida[tam-i] = palabra[i-1];
       // printf("En la palabra: %c", palabra[i-1]);
       // printf("En la palabra invertida: %c", palabra_invertida[tam-i]);
    }
    printf("Hola soy la palabra invertida: %s", palabra_invertida);            
    return 0;
}
