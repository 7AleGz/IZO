#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
    float n;

do {
    printf("Ingrese un n\xA3meros...\n");
    if (scanf("%f", &n) != 1) {
        printf("Por favor ingresa un n\xA3mero real y positivo...");
        getch();
        return 1;
    }
    clear();
} while (n >= 1 && n <= 10);
    getch();
    return 0;
}