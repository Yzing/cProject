#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int words;
	char word[20];
	int word_len;
	printf("How many words do you want to enter? ");
	
	while (scanf("%d", &words) && words > 0) {
		printf("enter your words: \n");
		char * res[words];
		for (int i = 0; i < words; i++) {
			if (scanf("%s", word)) {
					word_len = strlen(word);
					res[i] = malloc(word_len * sizeof(char));
					if (res[i] == NULL) {
						printf("memory error!\n");
						exit(1);
					}	
					strncpy(res[i], word, word_len);
			} else {
				break;
			}
		}
		printf("Here are your words: \n");
		for (int i = 0; i < words; i++) {
			printf("%s\n", res[i]);
		}
		printf("**End**\n");
		for (int i = 0; i < words; i++) {
			free(res[i]);
		}
		printf("How many words do you want to enter?[enter < 1 to quit]");
	}

	return 0;
}
