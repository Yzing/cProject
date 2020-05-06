#include <stdio.h>
#include <float.h>

int main() {
	float a = 1.0 / 3.0;
	double b = 1.0 / 3.0;

	printf("a in 6 percision: %18.6f\nb in 6 percision: %18.6f\n", a, b);
	printf("a in 12 percision: %18.12f\nb in 12 percision: %18.12f\n", a, b);
	printf("a in 16 percision: %18.16f\nb in 16 percision: %18.16f\n", a, b);
	printf("float FLT_DIG: %f\n", FLT_DIG);
	printf("float DBL_DIG: %f\n", DBL_DIG);
	return 0;
}
