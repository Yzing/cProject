#include <stdio.h>

int main() {
	char ch;
	float words = 0.0;
	float characters = 0.0;
	// ignore spaces;
	while((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\t' || ch == '\n')
			continue;
		// read the first no-space-char
		characters += 1;
		// read the word
		while ((ch = getchar()) != ' ' && ch != '\n' && ch != '\t' && ch != EOF) {
			characters += 1;
		}
		words += 1;
	}

	float avg = characters / words;

	printf("the file has %.0f words\n", words);
	printf("and has %.0f characters\n", characters);
	printf("it contains %.2f characters per word in average\n", avg);

	return 0;
}
