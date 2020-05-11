#include <stdio.h>

void copy_arr(double *, double *, int);
void copy_ptr(double *, double *, int);
void copy_ptrs(double *, double *, double *);
void print_arr(double *, int);

int main() {
	double source[3][2] = {
		{1.1, 1.2},
		{2.1, 2.1},
		{3.1, 3.2}
	};

	double target[3][2];

	for (int i = 0; i < 3; i++) {
		copy_arr(*(source + i), *(target + i), 2);
	}

	for (int i = 0; i < 3; i++) {
		print_arr(*(target + i), 2);
	}

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
