#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int i, a, n, s = 0;
	printf("Ingrese la cantidad de alumnos a evaluar: \n");
	
	while (scanf("%i", &a) != 1) {
		printf("Ingrese un valor v�lido.. \n");
		clear();
	}
	clear();
	
	for (i = 0; i < a; i++) {
		printf("Ingrese una nota \n");
		while (scanf("%i", &n) != 1 || n < 1 || n > 10) {
			printf("Ingrese un valor v�lido.. \n");
			clear();
		}
		clear();
		s += n; 
	}
	printf("El promedio es de: %i", s / a);
    getch();
    return 0;
}