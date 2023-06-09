#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int i, n, s = 0;
	printf("Ingrese la cantidad de n�meros naturales a sumar: \n");
	while (scanf("%i", &n) != 1) {
		printf("Ingrese un valor v�lido.. \n");
		clear();
	}
	clear();
	for (i = 0; i <= n; i++) { 
		s += i;
	}
	printf("La suma de sus n�meros es de: %i", s);
	getch();
	return 0;
}