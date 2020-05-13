#include <stdio.h>

#define avarage(x,y) 1/(((1/(x))+(1/(y)))/2)

int main() {
	double avg = avarage(4.0, 2.0);
	printf("%f\n", avg);
	return 0;
}
