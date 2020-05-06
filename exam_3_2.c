#include <stdio.h>

/*
	input: a Ascii number
	print: a Ascii character
*/

int main() {
	unsigned int i;
	printf("input an Ascii number: ");
	while(1) {
		scanf("%d", &i);
		if (i < 256 && i >= 0) {
			printf("number %d is %c in Ascii\n", i, i);
			printf("try again, or press [Ctrl + c] to exit: ");
		} else {
			printf("your input is not an Ascii number, please try again: ");
		}
	}
	return 0;
}
