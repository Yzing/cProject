#include <stdio.h>
int main() {
	int num;
	printf("Please input a num in 10-radix: ");
	scanf("%d", &num);
	printf("Decimal:\t%d\n", num);
	printf("Binary:\t%#b\n", num);
	printf("Octonary:\t%#o\n", num);
	printf("Hex:\t%#x\n", num);
	return 0;
}
