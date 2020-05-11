#include <stdio.h>
#include <string.h>
#define MAX 100


int main() {

	char arr[MAX][MAX];
	// a tmp pointer
	char (*p)[MAX] = arr;
	char * str;
	char ch;
	
	while(p < (arr + MAX) && fgets(*p, MAX, stdin) && **p != '\n') {
		str = *p;

		while (*str !='\0' && *str != '\n') {
			if (*str == 32) {
				strcpy(str, str + 1);
			}
			str++;
		}
		
		// if *str == '\0'
		if (!*str) {
			while(getchar() != '\n')
				continue;
		}
		p++;
	}

	p = arr;
	while(**p != '\n' && **p != '\0' && p < arr + MAX) {
		fputs(*p, stdout);
		p++;		
	}
	return 0;
}

