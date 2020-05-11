#include <stdio.h>

void copy_arr(double *, double *, int);
void copy_ptr(double *, double *, int);
void copy_ptrs(double *, double *, double *);
void print_arr(double *, int);

int main() {
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(source, target1, 5);
	copy_ptr(source, target2, 5);
	copy_ptrs(source, target3, source + 5);

	printf("target1: ");
	print_arr(target1, 5);

	printf("target2: ");
	print_arr(target2, 5);

	printf("target3: ");
	print_arr(target3, 5);
	return 0;
}

void copy_arr(double* source, double* target, int n) {
	for (int i = 0; i < n; i++) {
		target[i] = source[i];
	}
}

void copy_ptr(double* source, double* target, int n) {
	for (int i = 0; i < n; i++) {
	 	*(target + i) = *(source + i);
	}
}

void copy_ptrs(double* source, double* target, double* end) {
	for (; source < end; source++, target++) {
		*target = *source;
	}
}

void print_arr(double *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%f, ", arr[i]);
	}
	printf("\n");
}
