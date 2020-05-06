#include <stdio.h>

void printResult(char start, char end);

int main() {
	char c;
	char start = 'A';
	printf("input a character in upper case: ");
	int state = 1;
	while (state) {
		state = scanf("%c", &c);
		if (state == 1 && c != '\n') {
			if (c < start || c > (start + 25)) {
				printf("input illegel, try again: ");
			} else {
				printf("Perfect!!!\n");
				printResult(start, c);
				printf("try agin: ");
			}
		} else if (c == '\n') {
			continue;
		} else {
			printf("you input nothing, please try again: ");
		}
	}
	return 0;
}

void printResult(char start, char end) {
	int rowIndex = start;
	int spaceWidth;
	int i;
	do {
		printf("**");
		spaceWidth = end - rowIndex;
		for (i = 0;i < spaceWidth;i++) {
			printf(" ");
		}
		for (i = start;i < rowIndex;i++) {
			printf("%c", i);
		}
		for (i = rowIndex;i >= start;i--) {
			printf("%c", i);
		}	
		for (i = 0;i < spaceWidth;i++) {
			printf(" ");
		}
		printf("**");
		printf("\n");
		rowIndex++;
	} while(rowIndex <= end);
	printf("\n");
}
