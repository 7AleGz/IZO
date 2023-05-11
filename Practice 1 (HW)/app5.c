/* 
A) Necesito calcular la diagonal principal, el perímetro y la superficio de un rectángulo. 
B) Solicitar ambos números.
C) Variable float que almacena los números, y otra que almacene la hipotenusa ya calculada. Devolver el calculo desde printf();
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

int main() {
    float s1, s2, h;
    printf("Programa para calcular hipotenusa, per\xA1metro y superficie de tri\xA0ngulo rect\xA0ngulos \n");
    printf("Ingrese el primer lado de su tri\xA0ngulo rect\xA0ngulo: ");
    if (scanf("%f", &s1) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
    	return 1;
	}
	if (getchar() != '\n') {
		printf("Volv\x82 a ejecutar el programa usando solo n\xA3meros");
		return 1;
	}
    printf("Ingrese el segundo lado de su tri\xA0ngulo rect\xA0ngulo: ");
    if (scanf("%f", &s2) != 1 || s1 == s2) {
    	printf("No podes ingresar ambos valores iguales ni una letra o s\xA1mbolo, solo n\xA3meros");
    	return 1;
	}
	if (getchar() != '\n') {
		printf("Volv\x82 a ejecutar el programa usando solo n\xA3meros");
		return 1;
	}
    h = s1*s1 + s2*s2;
    printf("La hipotenusa de su tri\xA0ngulo rect\xA0ngulo es: %.2f  \n", h);
    printf("El per\xA1metro de su tri\xA0ngulo rect\xA0ngulo es: %.2f \n", s1 + s2 + h);
    printf("La superficie de su tri\xA0ngulo rect\xA0ngulo es: %.2f", s1 * s2 * h);
    getch();
    return 0;
}
