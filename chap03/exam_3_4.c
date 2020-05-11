#include <stdio.h>

/**
 * input: a float number of decimal radix
 * print: fixed-point notation, exponential notation, p notation if the system support
 */

int main() {
	float f;
	printf("Enter a float point value: ");
	scanf("%f", &f);
	printf("fixed-point notation: %f\n", f);
	printf("exponential notation: %e\n", f);
	printf("p notation: %a\n", f);
	return 0;
}
	
	
