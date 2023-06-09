#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
    char r;
    int c = 0;
    float s, sumS = 0.0, avS;

do {
    printf("Ingrese un sueldo..\n");
    if (scanf("%f", &s) != 1) {
        printf("Debe ingresar un valor v\xA0lido\n");
        getch();
        return 1;
    }
    clear();
    c++;
    sumS += s;
    
    printf("¿Desea continuar? (C/F):\n");
    scanf("%c", &r);
    clear();
} while (r != 'F' && r != 'f');

    avS = sumS / c;
    printf("La cantidad de sueldos ingresados es: %d\n", c);
    printf("El total de los sueldos ingresados es: %.2f\n", sumS);
    printf("El promedio de los sueldos ingresados es: %.2f\n", avS);

    getch();
    return 0;
}