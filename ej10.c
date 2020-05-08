#include <stdio.h>

int multiplicacion (int n1, int n2){
    int resultado;
    resultado = numero1*numero2;
    return resultado;
}

int suma (int n1, int n2){
    int resultado;
    resultado = n1+n2;
    return resultado;
}    

int resta (int n1, int n2){
     int resultado;
    resultado = n1-n2;
    return resultado;
}

int dividir (int n1, int n2){
    int resultado;
    resultado = n1%n2;
    return resultado;
}

void main() {

  int n1, n2;

  int opc;

  char c;
 
  do {    
    printf("Las opciones son: suma, resta, multiplicación y dividisión ");
    scanf("%d",&opc);
    switch(opc) {
      case 1:
        printf("\n pon n1:");
        scanf("%d", &n1 );
        printf("\n pon n2:");
        scanf("%d", &n2 );
        printf("La suma de %d y %d es: %d\n\n", n1, n2, suma(n1, n2));
        break;
      case 2:
        printf("\n pon n1:");
        scanf("%d", &n1);
        printf("\n pon n2: ");
        scanf("%d", &n2);
        printf("La resta de %d y %d es: %d\n\n", n1, n2, resta(n1, n2));
        break;
      case 3:
        printf("\n pon n1:");
        scanf("%d", &n1);
        printf("\n pon n2:");
        scanf("%d", &n2);
        printf("La division entre %d y %d es: %d\n", n1, n2, dividir(n1,n2));
        break;
      case 4:
        printf("\n pon n1:");
        scanf("%d", &n1);
        printf("\n pon n2:");
        scanf("%d", &n2);
        printf("La multiplicacion de %d y %d es: %d\n\n", n1, n2 , multiplicacion(n1, n2));
        break;
      default:
        printf("\nIntroduce una opción");
    }

  } while (opc != 0);

}

