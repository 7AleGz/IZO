/* 
A) Necesito ver el número anterior y posterior al ingresado. 
B) Calcular -1 y +1 al ingresado.
C) Variable float que almacena el número y devolver el calculo desde printf();
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	float n;
    printf("Programa n\xA3mero anterior y posterior \n");
    printf("Ingrese un n\xA3mero entero a evaluar: \n");
    if (scanf("%f", &n) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
        getch();
    	return 1;
	}
    printf("Su n\xA3mero es: %.2f \n Anterior: %.2f / Posterior: %.2f", n, n-1, n+1);
    getch();
    return 0;
}