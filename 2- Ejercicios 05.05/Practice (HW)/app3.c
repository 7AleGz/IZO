/* 
A) Necesito ver el perímetro de un triángulo. 
B) Solicitar lados.
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
	float n1, n2, n3;
    printf("Programa para calcular per\xA1metro de tri\xA0ngulos \n");
    printf("Ingrese su primer lado: \n");
    if (scanf("%f", &n1) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
    	return 1;
	}
    clear();

    printf("Ingrese su segundo lado: \n");
    if (scanf("%f", &n2) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
    	return 1;
	}
    clear();
    
    printf("Ingrese su tercer lado: \n");
    if (scanf("%f", &n3) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
    	return 1;
	}    
    printf("Su resultado es: %.2f \n", n1 + n2 + n3);
    getch();
    return 0;
}