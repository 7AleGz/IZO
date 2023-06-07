/* 
A) Conocer suma de ambos depósitos más el 20% de interés.
B) Primero sumar, luego calcular intereses.
C) Suma - Intereses - Total con intereses incluidos.
D) Compilar. Ejecutar.
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	float dep1, dep2;
    printf("Programa Suma Dep\xA2sitos con Inter\x82s \n");
    printf("Ingrese el primer dep\xA2sito realizado: \n");
    if (scanf("%f", &dep1) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
	}
    clear();

    printf("Ingrese el segundo dep\xA2sito realizado: \n");
    if (scanf("%f", &dep2) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
	}
    printf("La Suma de sus dep\xA2sitos es de: %.2f \n", dep1 + dep2);
    printf("El inter\x82s aplicado ser\xA0 del: %.2f \n", (dep1 + dep2) * 0.20);
    printf("Su total es de: %.2f", dep1 + dep2 + (dep1 + dep2) * 0.20);
    getch();
    return 0;
}