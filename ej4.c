Fecha de entrega: 5 feb. 23:59
Ejercicio 4: Hora correcta
95/100
95 puntos de 100

Silvestre Martínez Jiménez de Cisneros
27 ene.
Pide por pantalla al usuario las horas, los minutos y los segundos, y escribe un programa que determine si la hora proporcionada es o no correcta.
Comentarios de la clase

Tu trabajo
Tarea calificada

Ejercicio4.c
C
1 comentario privado

Silvestre Martínez Jiménez de Cisneros24 mar.
Está bien pero cuidado con el sangrado de código dentro de los if.


Ejercicio 4: Hora correcta
#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    
    printf("Por favor, introduzca las horas:");
    scanf ( "%d", &numero1);
    printf("\n");
    
    printf("Por favor, introduzca los minutos:");
    scanf ( "%d", &numero2);
    
    printf("Por favor, introduzca los segundos:");
    scanf ( "%d", &numero3);
    
    if(numero1<24&&numero2<60&&numero3<60){
    printf ("Es correcto");
    }
    
    else {
    printf ("No es correto");
    }

    return 0;
}
