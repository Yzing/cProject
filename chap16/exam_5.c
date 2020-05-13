#include <stdio.h>
#include <time.h>
#include <string.h>

void select(const int *, int, int);

int main() {
	int arr[20] = {
		23, 44, 55, 66, 77,\
		256, 11, 22, 69, 88,\
		9, 8, 7, 65, 72,\
		2, 3982, 3290, 112, 344
	};
	select(arr, 20, 10);
	return 0;
}

void select(const int * arr, int len, int num) {
	int arrcp[len];
	// copy arr to a new array
	memcpy(arrcp, arr, len * sizeof(int));
	if (num > len) {
		printf("the select num should lower than length of array\n");
		return;
	}
	// elements to be selected
	int remain = len;
	time_t t;
	int rand;
	while(num--) {
		t = time(NULL);
		rand = t % remain;
		printf("%d ", *(arrcp + rand));
		// if rand is not the last element
		if (rand + 1 < remain) {
			memmove(arrcp + rand, arrcp + rand + 1, (remain - rand - 1) * sizeof(int));
		}
		remain--;
	}
	printf("\n");
};

