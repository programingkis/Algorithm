#include <stdio.h>

int main(void) {
	int N, cnt = 1;

	scanf("%d", &N);


	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j > i; j--) {
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = (2 * N) - 1; j > 2 * i; j--) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}