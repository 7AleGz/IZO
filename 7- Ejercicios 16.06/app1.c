/*	
A) Ingresar la cantidad de alumnos.
B) Iterar sobre la cantidad de alumnos una consulta de edad del estudiante.
C) Hacer el promedio de la edad de todos los alumnos.
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
	int i, c;
	float t, e;
	setlocale(LC_CTYPE, "Spanish");
	printf("Programa para el cálculo de edad promedio. \n\n");
	printf("Ingrese la cantidad de alumnos: \n");
	while (scanf("%i", &c) != 1) {
		printf("Ingrese un valor válido.. \n");
		clear();
	}
	clear();
	
	for (i = 0; i < c; i++) {
		printf("Ingrese una edad \n");
		while (scanf("%f", &e) != 1) {
		printf("Ingrese un valor válido.. \n");
		clear();
		}
		t += e;
	clear();
	}
	printf("La edad promedio de la clase es de: %.2f \n", t / c);
	getch();
	return 0;
}