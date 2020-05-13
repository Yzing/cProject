#include <stdio.h>

void show_bits(unsigned);

int main() {
	float f = 2.0;
	show_bits((unsigned)f);
	return 0;
}


void show_bits(unsigned p) {
	int bits = sizeof(p) * 8;
	unsigned long mask = 1;
	mask <<= (bits - 1);
	int j = 1;
	unsigned long i = 0;
	printf("the bits display of the value is: \n");
	while (mask) {
		i = p & mask;
		i >>= (bits - j);
		j++;
		printf("%d ", i);
		mask >>= 1;
	}
	printf("\n");
}



