#include <stdio.h>
#include "print.h"

double average(double *, int);


int main() {
	int rows;
	int colums;

	printf("input the rows and colums split width space: \n");
	
	int s = 0;

	while(s != 2) {
 		s = scanf("%d %d", &rows, &colums);
		if (s != 2) {
			printf("input error, try again: \n");
		}
	}

	printf("good, an %d * %d array is build, and input the element value:\n", rows, colums);

	double arr[rows][colums];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colums; j++) {
			scanf("%lf", *(arr + i) + j);
		}
		printf("you have input %d rows! just continue: \n", i + 1);
	}

	printf("good, you have input all data, below is what you input:\n");

	for (int i = 0; i < rows; i++) {
		printArrDouble(*(arr + i), colums);
	}

	return 0;
}
