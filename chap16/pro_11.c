#include <stdio.h>

#define isBool(x) _Generic(x,\
	_Bool: "boolean",\
	default: "not boolean"\
)

int main() {
	_Bool x = 0;
	printf("1 is %s\n", isBool(1));
	printf("x is %s\n", isBool(x));
	return 0;
}
