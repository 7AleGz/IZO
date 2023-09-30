/* 
A) Necesito ver la suma de dos números enteros ingresados. 
B) Solicitar ambos números.
C) Variable float que almacena los números y devolver el calculo desde printf();
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
    printf("Programa para sumar valores enteros \n");
    printf("Ingrese su primer n\xA3mero entero a sumar: \n");
    if (scanf("%f", &n1) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
        getch();
    	return 1;
	}
    clear();
    
    printf("Ingrese su segundo n\xA3mero entero a sumar: \n");
    if (scanf("%f", &n2) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
        getch();
    	return 1;
	}
    printf("Su resultado es: %.2f \n", n1 + n2);
    getch();
    return 0;
}