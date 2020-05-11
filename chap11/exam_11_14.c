#include <stdio.h>
#include <stdlib.h>

int main(int argnum, char *args[]) {
	if (argnum < 3) {
		printf("error, you should get two arguments\n");
		return 0;
	}
	
	char *e;

	double base = strtod(args[1], &e);
	printf("the rest of args[0] is %s\n", e);
	int sq = atoi(args[2]);
	
	double res = 1.0;

	while (--sq) {
		res *= base;
	}

	printf("%s^%s is: %.4f\n", args[1], args[2], res);
}
