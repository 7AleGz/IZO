#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clear() {
    while (getchar() != '\n');
}


int main() {
	setlocale(LC_CTYPE, "Spanish");
	int i;
	float s, n;
	for (i = 0; i < 10; i++) { 
		printf("Ingrese 10 n�meros para conocer la suma de los mismos: \n");
		while (scanf("%f", &n) != 1) {
			printf("Ingrese un valor v�lido.. \n");
			clear();
		}
		s += n;
	}
	printf("La suma de sus n�meros es de: %.2f", s);
	getch();
	return 0;
}