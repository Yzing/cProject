#include <limits.h>

static long seed = 1;

long rand() {
	long rand = seed * 1103515245 + 12345;
	seed = (rand / 65536) % 32768;
	return seed % 10 + 1;
}

void randl(long s) {
	seed = s;
}
