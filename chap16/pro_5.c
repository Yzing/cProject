#include <stdio.h>

#define printf_exp(X,Y) printf(#X " is: %d and " #Y " is: %d\n", X, Y)
#define desc_v(X) printf("name: " #X "; " "value: %d; address: %p;\n", X, &X)

int main() {
	int x = 2;
	printf_exp(3 + 4, 5 * 8);
	desc_v(x);
	return 0;
}
