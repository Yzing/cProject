#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

unsigned int snooze(unsigned int secs) {
	unsigned int rc = sleep(secs);
	printf("Slept for %u of %u secs\n", secs - rc, secs);
	return rc;
}

void handler(int sig) {
	printf("receive signal %u\n", sig);
}

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("argv error\n");
		exit(0);
	}
	if (signal(SIGINT, handler) == SIG_ERR) {
		printf("signal error\n");
		exit(0);
	}
	(void)snooze(atoi(argv[1]));
	return 0;
}

