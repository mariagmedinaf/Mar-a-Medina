{
	int horas;
	int minutos;
	int segundos;
    
	printf("Por favor, introduzca las horas:");
	scanf ( "%d", &horas);
	printf("\n");
	int segundos_horas=horas * 3600;
    
	printf("Por favor, introduzca los minutos:");
	scanf ( "%d", &minutos);
 	int segundos_minutos=minutos * 60;
 	 
	printf("Por favor, introduzca los segundos:");
	scanf ( "%d", &segundos);
   	 
	int suma = segundos_horas + segundos_minutos + segundos;
	printf ("%d es el resultado de la operación", suma);    
	return 0;
}
