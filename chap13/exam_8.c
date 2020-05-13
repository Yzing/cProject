#include <stdio.h>
#include <stdlib.h>

static long counts(FILE *, char);

int main(int args, char *argv[]) {
	
	char ch;
	FILE *fp;
	long num;

	if (args < 2) {
		printf("at least 2 arguments are required, but %d is provided\n", args);
		exit(EXIT_FAILURE);
	}

	ch = *(argv[1]);
	
	if (args == 2) {
		char rch;
		while (fscanf(stdin, "%c", &rch) && rch != '\0' && rch != '\n') {
			if (rch == ch)
				num++;
		}
		printf("character %c appears %ld times in your input\n", ch, num);
		return 0;
	}

	char ** fnamep = argv + 2;

	while (fnamep < argv + args) {
		if ((fp = fopen(*fnamep, "r")) == NULL) {
			printf("can't open the file %s\n", *fnamep);
			continue;
		}
		num = counts(fp, ch);
		printf("character %c appears %ld times in file %s\n", ch, num, *fnamep);
		fclose(fp);
		fnamep++;
	}

	printf("Done!\n");
	return 0;
 
}

long counts(FILE *fp, char ch) {
	char rch;
	long count = 0;
	while ((rch = getc(fp)) != EOF) {
		if (rch == ch)
			count++;
	}
	return count;
}
