#include <stdio.h>
#include <ctype.h>

int main() {
	
	int words = 0;
	int up_ch = 0;
	int lo_ch = 0;
	int punc = 0;
	int digit = 0;
	int read_word = 0;

	char ch;
	
	// ignore the space character
	while((ch = getchar()) && isspace(ch))
		continue;

	while((ch = getchar()) != EOF) {
		// a word read
		read_word = 1;
		if (isalpha(ch)) {
			
			if (isupper(ch))
				up_ch++;
			else
				lo_ch++;
			continue;
		}
			
		if (read_word) {
			words++;
			read_word = 0;
		}

		if (isspace(ch)) {
			continue;					
		}

		if (ispunct(ch)) {
			punc++;
			continue;
		}

		if (isdigit(ch)) {
			digit++;
		}
	}

	printf("the file has %d words.\n", words);
	printf("the file has %d upper characters.\n", up_ch);
	printf("the file has %d lower characters.\n", lo_ch);
	printf("the file has %d punct.\n", punc);
	printf("the file has %d digit.\n", digit);

	return 0;
}
