#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	int n = 0;
    float r;
    printf("Ingrese n\xA3meros positivos reales. Para finalizar la entrada de datos --> Presione 0 \n");
    if (scanf("%f", &r) != 1 || r < 0) {
        printf("Por favor ingresa un n\xA3mero real y positivo...");
        getch();
        return 1;
    }
    clear();
    
    while (r != 0) {
        n++;
        printf("Ingrese otro n\xA3mero o termine presionando --> 0 \n");
        if (scanf("%f", &r) != 1 || r < 0) {
            printf("Por favor ingresa un n\xA3mero real y positivo...");
            getch();
            return 1;
        }
    }
    printf("La cantidad de n\xA3meros ingresados es de: %d \n", n);
    getch();
    return 0;
}