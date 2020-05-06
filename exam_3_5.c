#include <stdio.h>

/*
 * input: years
 * print: seconds
 */
const float SECONDS_OF_YEAR = 3.156e+7;

int main() {
	float years;
	float seconds;
	printf("Enter your ages: ");
	scanf("%f", &years);
	seconds = SECONDS_OF_YEAR * years;
	printf("The seconds of your ages is: %.0f\n", seconds);
	return 0;
}
