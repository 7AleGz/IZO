#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

#define PM2 50.0 // precio por metro cuadrado

int main() {
    float length, front, m2, usd, pfusd, pfars;
    printf("Programa de cotizaci\xA2n de Lotes \n");
    printf("Ingrese la medida de frente en metros: \n");
    if (scanf("%f", &front) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
	}
    clear();

    printf("Ingrese la medida de largo en metros: \n");
    if (scanf("%f", &length) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
	}
    clear();

    printf("Precio del d\xA2lar: \n");
    if (scanf("%f", &usd) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
	}
    usd = (usd == 0) ? 1 : usd; // Si la conversión de dólares a pesos es $0 va a mantener el precio en pesos.
    m2 = front * length; // Calcula el metro cuadrado.
    pfusd = m2 * PM2; // Calcula cuanto duele.
    pfars = pfusd * usd; // Pasa el dolor a pesos.
    printf("Un lote de %.2f metros cuadrados te va a costar: $%.2f en d\xA2lares y $%.2f en pesos. \n",m2,pfusd,pfars);
    getch();
    return 0;
}