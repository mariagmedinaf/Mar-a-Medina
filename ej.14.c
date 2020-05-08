#include <stdio.h>
#include <stdlib.h>
int main()
{
    float centigrados=0.0;
    float fahrenheit=0.0;
    printf("escriba los fahrenheit..: ");
    scanf(" %f",&fahrenheit);
        centigrados = (5.0/9.0)*(fahrenheit-32);
    printf("\ngrados celsius : %.2f", centigrados);
    return 0;
}
