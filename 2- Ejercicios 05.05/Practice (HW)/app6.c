/* 
A) Necesito ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado
B) Solicitar ambos números.
C) Variable float que almacena los números, devolver el calculo desde printf();
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	float n1, n2;
    printf("Programa Suma, Multiplicaci\xA2n y Resta \n");
    printf("Ingrese el primer valor a calcular: \n");
    if (scanf("%f", &n1) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
		getch();
    	return 1;
	}
	clear();

    printf("Ingrese el segundo valor a calcular: \n");
    if (scanf("%f", &n2) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
		getch();
    	return 1;
	}
    printf("La Suma de sus valores es de: %.2f \n", n1 + n2);
    printf("El producto de sus valores es de: %.2f \n", n1 * n2);
    printf("Su total es de: %.2f", n1 - n2);
    getch();
    return 0;
}