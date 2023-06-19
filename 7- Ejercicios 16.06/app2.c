/*
A) Ingresa los importes de las facturas hasta terminar.
B) Realiza la suma del total de facturas.
C) Calcular el 3% de comisión y extraerlo del total. Porcentaje --> A% de C = C*A/100
D) Compilar. Ejecutar.
E) Validar.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	int f = 0;
	float i, t;
	setlocale(LC_CTYPE, "Spanish");
	printf("Programa para el cálculo de facturas y comisiones (RAPIPAGO). \n\n");
	
	do {
		printf("Ingrese el importe de una factura para continuar. Para finalizar, ingrese 0. \n");
		while (scanf("%f", &i) != 1) {
			printf("Ingrese un valor válido.. \n");
			clear();
			}
		clear();	
		t += i;
		if (i != 0) {
			f++;
		}	
	} while (i != 0);
	printf("Se sumaron %i facturas y dió una suma total de $%.2f.", f, t);
	getch();
	return 0;
}