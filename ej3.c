#include <stdio.h>
int main()
{
printf("1. Semáforo verde. 2. Semáforo ámbar. 3. Semáforo rojo.");
int color;
  scanf("%d",&color);
  switch(color){
    case 1:
     printf("Puede pasar");
     break;
    case 2:
     printf("Pasa con cuidado");
     break;
    case 3:
     printf("No puede pasar");
     break;
    default:
     printf("No existe");
}
return 0;
}
