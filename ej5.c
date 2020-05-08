#include <stdio.h>
int main()
{
 int numero1;
 int numero2;

 printf("Por favor, introduzca el número 1:");
 scanf ( "%d", &numero1);
 printf("\n");

 printf("Por favor, introduzca el número 2:");
 scanf ( "%d", &numero2);

 int suma=0;
 int i = numero1;
 while(i<=numero2){
 suma=i+suma;

 i++;
 }
 printf("La suma total es: %d", suma);
 r
