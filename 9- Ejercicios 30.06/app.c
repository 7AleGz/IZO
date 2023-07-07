#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	setlocale(LC_CTYPE, "Spanish");
	float precioD, cantD, precioFinal;
	FILE* cotitxt = fopen("valor.txt", "r");
	FILE* histotxt = fopen("historial.txt", "w");
	
	fscanf(cotitxt, "%f", &precioD);
	
	printf("el valor del dólar es $%.2f \n", precioD);
	
	printf("Ingrese la cantidad de dólares a comprar: \n");
	while (scanf("%f", &cantD) != 1) {
		printf("Ingrese un valor válido.. \n");
		clear();
	}	
	clear();
	
	precioFinal = precioD * cantD;
	printf("El costo total será de $%.2f pesos.", precioD * cantD);
	fprintf(histotxt, "%.2f", precioFinal);
	
	getch();
	return 0;
}