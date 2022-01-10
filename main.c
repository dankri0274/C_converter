#include <stdio.h>

int main() {
	//* Choice 1, 2, 3
	int ch1;
	int ch2;
	int ch3;

	//* Celsius and fahrenheit
	float cel = 0.0;
	float fah = 0.0;

	//* km/h, m/s, mph
	float kmph = 0.0;
	float mps = 0.0;
	float mph = 0.0;

	printf("Danny\'s converting tool\n");
	printf("\nChoose converter\n1. Speed\n2. Temperature\n> ");
	scanf("%d", &ch1);

	if (ch1 == 1) {
		printf(
			"\n1. m/s to km/h\n2. km/h to m/s\n3. mp/h to km/h\n4. mp/h to m/s\n> "
		);
		scanf("%d", &ch2);

		if (ch2 == 1) {
			printf("m/s: ");
			scanf("%f", &mps);

			kmph = mps * 3.6;

			printf("%.2f m/s = %.2f km/h\n\n", mps, kmph);
		}
		else if (ch2 == 2) {
			printf("km/h: ");
			scanf("%f", &kmph);

			mps = kmph / 3.6;
			
			printf("%.2f km/h = %.2f m/s\n\n", kmph, mps);
		}
		else if (ch2 == 3) {
			printf("mph: ");
			scanf("%f", &mph);

			kmph = mph * 1.61;

			printf("%.2f mph = %.2f km/h\n\n", mph, kmph);
		}
		else if (ch2 == 4) {
			printf("mph: ");
			scanf("%f", &mph);

			mps = (mph * 1.61) / 3.6;

			printf("%.2f mph = %.2f m/s\n\n", mph, mps);
		}
		else {
			printf("Invalid input!\n");
		}
	}
	else if (ch1 == 2) {
		printf("\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n> ");
		scanf("%d", &ch3);

		if (ch3 == 1) {
			printf("Degrees (C): ");
			scanf("%f", &cel);

			fah = cel * 1.8 + 32;

			printf("\n%.2f C = %.2f F", cel, fah);
		}
		else if (ch3 == 2) {
			printf("Degrees (F): ");
			scanf("%f", &fah);

			cel = (fah - 32) * 0.5556;

			printf("\n%.2f F = %.2f C", fah, cel);
		}
		else {
			printf("Invalid input!");
		}
	}
	else {
		printf("\nInvalid input!");
	}
	
	return 0;
}