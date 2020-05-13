#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define NAME_SIZE 80

int main() {

	FILE *fp;
	char fname[NAME_SIZE];
	char ch;

	printf("enter the file name: ");
	if (scanf("%s", fname) == 0) {
		printf("no filename entered, process exit!\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(fname, "r+")) == NULL) {
		printf("can't open the file %s\n", fname);
		exit(EXIT_FAILURE);
	}

	while((ch = getc(fp)) != EOF) {
		if (islower(ch)) {
			fseek(fp, -1, SEEK_CUR);
			ch = (char)toupper(ch);
			putc(ch, fp);
		}
	}

	printf("Done!\n");
	return 0;

}
