#include <stdio.h>

int main(void) {
	int N, a = 1, b;


	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		a = a * 2;
	}



	printf("%d", (a + 1) * (a + 1));



	return 0;
}