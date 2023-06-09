#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	int n, c = 0;
    printf("Ingrese n\xA3meros positivos reales. Para finalizar la entrada de datos --> Presione 0 \n");
    if (scanf("%d", &n) != 1) {
        printf("Por favor ingresa un n\xA3mero real y positivo...");
        getch();
        return 1;
    }
    clear();
    
    while (n != 0) {
        if (n >= 100) {
            c++;
        }
        printf("Ingrese un n\xA3mero: \n");
        if (scanf("%d", &n) != 1) {
            printf("Solo se pueden ingresar nmeros mayores e iguales a 100...");
            getch();
            return 1;
        }
    }
    printf("La cantidad de n\xA3meros mayores e iguales a 100 es de: %d \n", c);
    getch();
    return 0;
}

