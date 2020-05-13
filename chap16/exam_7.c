#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void show_array(const double ar[], int n);

double * new_d_array(int n, ...);

int main() {
	double *p1;
	double *p2;

	p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
	p2 = new_d_array(4, 100.0, 23.5, -400.0, 2984.6);

	show_array(p1, 5);
	show_array(p2, 4);

	free(p1);
	free(p2);

	return 0;
}

void show_array(const double ar[], int n) {
	int i = 0;
	for(;i < n; i++) {
		printf("%f\t", *(ar + i));
	}
	printf("\n");
}

double * new_d_array(int n, ...) {
	double *p = malloc(n * sizeof(double));
	int i = 0;
	// declare a variable arguments list
	va_list ap;
	// init ap
	double d;
	va_start(ap, n);
	for (; i < n; i++) {
		d = va_arg(ap, double);
		*(p+i) = d;
	}
	va_end(ap);
	return p;
}
