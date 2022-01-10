#include <stdio.h>

#define CLEAR printf("\e[1;1H\e[2J"); //* Clears screen

int main() {
	//* Choice 1, 2, 3
	int ch1;
	int ch2;

	//* Centimeters and inches
	float cm = 0.0;
	float in = 0.0;

	//* Celsius and fahrenheit
	float cel = 0.0;
	float fah = 0.0;

	//* km/h, m/s, mph
	float kmph = 0.0;
	float mps = 0.0;
	float mph = 0.0;

	CLEAR

	printf("Daniel\'s converting tool\n");
	printf("\nChoose converter\n1. Speed\n2. Temperature\n3. Length\n> ");
	scanf("%d", &ch1);

	if (ch1 == 1) {
		CLEAR
		printf("___SPEED___\n\n");
		printf(
			"1. m/s to km/h\n2. km/h to m/s\n3. mph to km/h\n4. mph to m/s\n5. km/h to mph\n> "
		);
		scanf("%d", &ch2);

		if (ch2 == 1) {					//! Convert meters/s to kilometers/h
			CLEAR

			printf("meters/s to kilometers/h\n\n");
			printf("m/s: ");
			scanf("%f", &mps);

			kmph = mps * 3.6;
			printf("\n%.2f m/s = %.2f km/h\n\n", mps, kmph); //* Prints the result
		}
		else if (ch2 == 2) {			//! Convert kilometers/h to meters/s
			CLEAR

			printf("kilometers/h to meters/s\n\n");
			printf("km/h: ");
			scanf("%f", &kmph);

			mps = kmph / 3.6;
			
			printf("\n%.2f km/h = %.2f m/s\n\n", kmph, mps); //* Prints the result
		}
		else if (ch2 == 3) {			//! Convert miles/h to kilometers/h
			CLEAR

			printf("miles/h to kilometers/h\n\n");
			printf("mph: ");
			scanf("%f", &mph);

			kmph = mph * 1.61;
			printf("\n%.2f mph = %.2f km/h\n\n", mph, kmph); //* Prints the result
		}
		else if (ch2 == 4) {			//! Convert miles/h to meters/s
			CLEAR

			printf("miles/h to meters/s\n\n");
			printf("mph: ");
			scanf("%f", &mph);

			mps = (mph * 1.61) / 3.6;
			printf("\n%.2f mph = %.2f m/s\n\n", mph, mps); //* Prints the result
		}
		else if (ch2 == 5) {
			CLEAR

			printf("kilometers/h to miles/h\n\n");
			printf("km/h: ");
			scanf("%f", &kmph);

			mph = kmph * 0.621371192;
			printf("%.2f km/h = %.2f mph", kmph, mph);
		}
		else {
			printf("\nInvalid input!\n");
		}
	}
	else if (ch1 == 2) {
		CLEAR

		printf("___TEMPERATURE___\n\n");
		printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n> ");
		scanf("%d", &ch2);

		if (ch2 == 1) {					//! Convert celsius to fahrenheit
			CLEAR

			printf("celsius to fahrenheit\n\n");
			printf("Degrees (C): ");
			scanf("%f", &cel);

			fah = cel * 1.8 + 32;
			printf("\n%.2f C = %.2f F\n\n", cel, fah); //* Prints the result
		}
		else if (ch2 == 2) {			//! Convert fahrenheit to celsius
			CLEAR

			printf("fahrenheit to celsius\n\n");
			printf("Degrees (F): ");
			scanf("%f", &fah);

			cel = (fah - 32) * 0.5556;
			printf("\n%.2f F = %.2f C\n\n", fah, cel); //* Prints the result
		}
		else {
			printf("\nInvalid input!\n");
		}
	}
	else if (ch1 == 3) {
		CLEAR

		printf("___LENGTH___\n\n");
		printf("1. cm to in\n2. in to cm\n> ");
		scanf("%d", &ch2);

		if (ch2 == 1) {					//! Convert cm to inches
			CLEAR

			printf("cm to inches\n\n");
			printf("cm: ");
			scanf("%f", &cm);

			in = cm * 0.393700787;
			printf("\n%.2f cm = %.2f in\n\n", cm, in); //* Prints the result
		}
		else if (ch2 == 2) {			//! Convert inches to cm
			CLEAR

			printf("inches to cm\n\n");
			printf("in: ");
			scanf("%f", &in);

			cm = in * 2.54;
			printf("\n%.2f in = %.2f cm\n\n", in, cm); //* Prints the result
		}
		else {
			printf("\nInvalid input!\n");
		}
	}
	else {
		printf("\nInvalid input!\n"); //* Prints error
	}
	
	return 0;
}
