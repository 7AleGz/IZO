#include<stdio.h>
#include<conio.h>
#include<locale.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int n;
	float n1, n2;
	printf("IZO \n");
	printf("Presione una tecla para acceder \n");
	printf("1: Mostrar datos alumno/s \n");
	printf("2: Mostrar el mayor de 2 n�meros \n");
	printf("3: Salir \n");
	if (scanf("%i", &n) != 1) {
		printf("No ingresaste una opci�n v�lida");
		getch();
		return 1;
	}
	clear();
	
	switch(n) 
	{
		case 1:
			printf("Datos de Alumnos del IZO: \n");
			printf("Juan Carlos\nJuan Carlos\nJuan Carlos\nJuan Carlos\n");	
			getch();
			return 0;
			break;
			
		case 2: 
			printf("Ingresa dos n�meros para ver el mayor: \n");

			if (scanf("%f %f", &n1, &n2) != 2) {
				printf("Debes ingresar un n\xA3mero valido, no s\xA1mbolos ni letras.");
				getch();
				return 1;
			}
			clear();
		
			printf("El n�mero mayor es: %.2f",  n1 = (n1 > n2) ? n1 : n2);	
			getch();
			return 0;
			break;
		
		case 3:
			printf("Saliste.");
			getch();
			return 0;
			break;
		
		default:
			printf("La opci�n que ingresaste no es v�lida!");
			getch();
			return 1;
	}
}