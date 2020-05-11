#include <stdio.h>

void printNormal(char a);
void printInnormal(char a);

int main () {
	char input;
	int count = 0;
	while((input = getchar()) != EOF) {
		if (input >= ' ') {
			printNormal(input);
		} else {
			printInnormal(input);
		}
		count++;
		if (count / 5 > 0) {
			count = 0;
			printf("\n");
		}
	}
	printf("Done\n");
	return 0;
}

void printNormal(char a) {
		printf("%c-%d\t\t", a, a);
}

void printInnormal(char a) {
		switch(a) {
			case '\t': 
				printf("\\t-");
				break;
			case '\n':
				printf("\\n-");
				break;
			case '\b':
				printf("\\b-");
				break;
			case '\a': 
				printf("\\a-");
				break;
			case '\f': 
				printf("\\f-");
				break;
			case '\r':
				printf("\\r-");
				break;
			default:
				printf("^%c", a + 64);
				break;
		}
		printf("%d\t\t", a);
}
