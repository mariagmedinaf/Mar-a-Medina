#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m1[5][5];
    int m2[5][5];
    int sumamatriz1=0;
    int sumamatriz2=0;

    // rellenar las matrices
    int i, j;
    // recorre las filas
    for(i=0; i<5; i++){
        // recorre las columnas
        for(j=0; j<5; j++){
            m1[i][j] = rand() % 10;
            m2[i][j] = rand() % 10;
                       
        }
    }
    
    for(i=0; i<5; i++){
                for(j=0; j<5; j++){
                 
                    sumamatriz1 = sumamatriz1 + m1[i][j];
                    sumamatriz2 = sumamatriz2 + m2[i][j];
                }
            }
     if(sumamatriz1>sumamatriz2){
        printf("La matriz 1 es mayor que la otra: \n");}
     else { 
        printf("La matriz 2 es mayor que la otra: \n");
     }
        
    return 0; } 

