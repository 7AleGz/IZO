#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	int i, j, rows, columns;

    printf("Programa para hacer tableros de Ajedrez \n");
    printf("Ingrese la cantidad de filas deseadas: \n");
    while (scanf("%i", &rows) != 1) {
		printf("Ingrese un valor válido.. \n");
		clear();
	}
    clear();
    
    printf("Ingrese la cantidad de columnas deseadas: \n");
    while (scanf("%i", &columns) != 1) {
		printf("Ingrese un valor válido.. \n");
		clear();
	}
    clear();
	
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= columns; j++) {
			if (i % 2 == 0) {
				if (j % 2 != 0) {
					printf("|");
				    } else {
					    printf("#");
				    }     
			} else {
				if (j % 2 != 0) {
					printf("#");
				    } else {
					    printf("|");
				    }
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}