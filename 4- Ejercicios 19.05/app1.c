// IF CONDICIONES SEGUN EDADES //
#include<stdio.h>

main() {
	int edad; //variable local para guardar la edad que se ingresa
	printf("*******************************\n\n");
	printf("*** Ingrese la Edad:");
	scanf("%i",&edad);
	if (edad < 18)
		{
			printf("Es MENOR de Edad !!!\n");
		}
	else if(edad == 18)
	{
		printf("Tiene EXACTAMENTE 18 años\n");
	}
	else
		{
			printf("Es MAYOR de Edad !!!\n");
		}
}