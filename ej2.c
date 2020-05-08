#include <stdio.h>

int main()
{
	int n1;
 
	printf("Por favor, introduzca el año que desee:");
	scanf ( "%d", &n1);
	printf("\n");
    
	if(n1%4==0){
	printf ("el año es bisiesto");
	}
	else{
	printf ("el año no es bisiesto");
	}
    
	return 0;
}
