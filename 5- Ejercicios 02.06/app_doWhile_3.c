#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <conio.h>
#include <ctype.h>

void clear() {
	while (getchar() != '\n');
}

int main() {
	const float MAX_LUGGAGE_WEIGHT = 3500; 
	float lastLuggageWeight, totalLuggageWeight = 0; 
	int seatsQuantity, busID, passengersQuantity = 0; 
	
	setlocale(LC_CTYPE, "Spanish"); 
	
	printf("Se permite calcular la cantidad de pasajeros que abordarán un viaje en micro de acuerdo a las reglas de la empresa de transporte.\n\n");
	
	printf("Por favor, introduzca el número de micro a continuación:\n");
	while(scanf("%i", &busID) != 1 || busID <= 0) {
		clear();
		printf("El valor que ingresaste no es válido, debe ser un número entero positivo. Prueba otra vez:\n");
	};
	
	clear();
	
	printf("Por favor, introduzca la cantidad de asientos disponibles en el micro a continuación:\n");
	while(scanf("%i", &seatsQuantity) != 1 || seatsQuantity <= 0) {
		clear();
		printf("El valor que ingresaste no es válido, debe ser un número entero positivo. Prueba otra vez:\n");
	};
	
	clear();
	
	do {
		system("cls");
		
		printf("Por favor, introduzca el peso del equipaje del pasajero a continuación:\n");
		
		while(scanf("%f", &lastLuggageWeight) != 1 || lastLuggageWeight <= 0) {			
			clear();
			printf("El valor que ingresaste no es válido, debe ser un número positivo. Prueba otra vez:\n");
		};
		
		clear();
		
		if (lastLuggageWeight + totalLuggageWeight > MAX_LUGGAGE_WEIGHT) {
			printf("El equipaje de este pasajero hará que se exceda el peso máximo permitido. Relocalizalo en otro viaje con más capacidad disponible. Presiona una tecla para continuar.\n");
			getch();
			continue;
		}
		
		passengersQuantity++;
		totalLuggageWeight += lastLuggageWeight;
		
		printf("Introduciste los pesos de los equipajes de %i pasajeros.\n\n ¿Continua o Finaliza? (C/F)\n", passengersQuantity);
		char choice;
		while (scanf("%c", &choice) != 1 || (tolower(choice) != 'c' && tolower(choice) != 'f')) {
			clear();
			printf("El valor que ingresaste no es una opción válida. Volvé a ingresar tu selección:\n");
		};
		
		if (tolower(choice) == 'f') {
			break;	
		};
		
		clear();
		
	} while (totalLuggageWeight <= MAX_LUGGAGE_WEIGHT && passengersQuantity < seatsQuantity);
	
	system("cls");
	
	printf("En el micro  \"%i\", de %i asientos, se registraron %i pasajeros. Se alcanzó la suma de %.2f kg de equpaje entre ellos.", busID, seatsQuantity, passengersQuantity, totalLuggageWeight);
	getch();
	return 0;
}