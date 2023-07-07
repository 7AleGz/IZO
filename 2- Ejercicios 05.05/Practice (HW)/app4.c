/* 
A) Necesito calcular la hipotenusa, el perímetro y la superficie de un triángulo rectángulo. 
B) Solicitar lados.
C) Variable float que almacena los números, y otra que almacene la hipotenusa ya calculada. Devolver el calculo desde printf();
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
    float s1, s2, h;
    printf("Programa para calcular hipotenusa, per\xA1metro y superficie de tri\xA0ngulo rect\xA0ngulos \n");
    printf("Ingrese el primer lado de su tri\xA0ngulo rect\xA0ngulo: ");
    if (scanf("%f", &s1) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
		getch();
    	return 1;
	}
    clear();
	
    printf("Ingrese el segundo lado de su tri\xA0ngulo rect\xA0ngulo: ");
    if (scanf("%f", &s2) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
		getch();
    	return 1;
	}
	
	h = sqrt(pow(s1,2) + pow(s2,2));
    printf("La hipotenusa de su tri\xA0ngulo rect\xA0ngulo es: %.2f \n", h);
    printf("El per\xA1metro de su tri\xA0ngulo rect\xA0ngulo es: %.2f \n", s1 + s2 + h);
    printf("La superficie de su tri\xA0ngulo rect\xA0ngulo es: %.2f", s1 * s2 * h);
    getch();
    return 0;
}