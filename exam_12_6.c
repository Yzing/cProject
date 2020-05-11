#include <stdio.h>
#include <time.h>

long rand();
void randl(long);

int main() {
	
	int counts[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int r;

	const int n = 10000;
	randl((long) time(0));

	for (int i = 0; i < n; i++) {
		r = rand();
		counts[r - 1]++;
	}
	
	printf("num:\t");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", i + 1);
	}
	printf("\n");

	printf("times:\t");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", counts[i]);
	}

	return 0;
}
