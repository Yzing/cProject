#include <stdio.h>
#include "print.h"

void reverse(double *, int n);

int main() {

	double arr[10] = { 1.1, 2.2, 3.3, 3.5, 3.6, 5.7, 5.087, 89.33, 12.456, 99.999 };
	printArrDouble(arr, 10);
	
	reverse(arr, 10);
	printArrDouble(arr, 10);

	return 0;
}

void reverse(double* a, int n) {
	int i = 0;
	int j = n - 1;
	double tmp;
	while(i < j) {
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}





