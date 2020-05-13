#include <time.h>
#include <stdio.h>

void delay(double);

void delay(double d) {
	clock_t start = clock();
	clock_t now;
	double clocks = CLOCKS_PER_SEC;
	while((now = clock())) {
		if (((double)(now - start)) / clocks > d)
			break;
	}
}

int main() {
	delay(3.0);
	printf("after 3 seconds\n");
	return 0;
}
