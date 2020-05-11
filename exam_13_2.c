#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF_SIZE 1024

static int copy(FILE *, FILE *);

int main(int argnum, char *args[]) {
	FILE * fa;
	FILE * fs;
	FILE * ftest;

	char ** fp;
	
	if (argnum < 3) {
		fprintf(stderr, "require two arguments least, but %d is provided\n", argnum - 1);
		exit(EXIT_FAILURE);
	}

	// open source file, exit if failure
	if ((fs = fopen(args[1], "r")) == NULL) {
		fprintf(stderr, "can't open the file %s\n", args[1]);
	}
	
	// destination list, we can copy a flie to multiple targets
	fp = args + 2;

	while ((fp < args + argnum)) {

		printf("copying to %s\n", *fp);
		
		// test if the target is exist or is source self, if it is, do nothing
		if (strcmp(args[1], *fp) == 0 || (ftest = fopen(*fp, "r")) != NULL) {
			fprintf(stdout, "the file %s is exist, we shouldn't overwrite it\n");
			if (ftest)
				fclose(ftest);
			fp++;
			continue;
		}

		// create and open the target file in write mode
		fa = fopen(*fp, "w");
		if (fa == NULL) {
			fprintf(stderr, "can't create file %s\n", *fp);
			exit(EXIT_FAILURE);
		}

		// copy the content from source file to target file
		if (!copy(fs, fa)) {
			printf("failure at copying %s to %s\n", args[1], *fp);	
		}

		printf("done of copying to %s\n", *fp);
		
		rewind(fs);
		fclose(fa);
		fp++;
	}
	
	printf("Done!\n");
	// close the source file
	fclose(fs);
	return 0;
}

int copy(FILE * source, FILE * target) {
	static char buf[BUF_SIZE];

	while(fgets(buf, BUF_SIZE, source)) {
		fputs(buf, target);
		if (feof(source))
			break;
	}

	if (ferror(source) || ferror(target))
		return 0;	
	return 1;
}
