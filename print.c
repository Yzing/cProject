#include <stdio.h>
#include "print.h"

void printArrDouble(double *a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%f, ", a[i]);
	}
	printf("\n");
}
