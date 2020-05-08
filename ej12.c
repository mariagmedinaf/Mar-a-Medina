#include <conio.h>
#include <stdio.h>

void intercambio(int *a, int *b){
    int i = *a;
    *a = *b;
    *b = i;
}

int main()
{
    int a, b;

    printf("\n introduzca un valor para a:");
    scanf("%d", &a);
    printf("\n introduzca un valor para b: ");
    scanf("%d", &b);

    printf( "\n  intercambiando los valores...");
    

    intercambio(&a, &b);
    printf("\n\n ahora, el valor de a es: %d", a);
    printf("\n\n ahora, el valor de b es: %d", b);

    return 0;
}
