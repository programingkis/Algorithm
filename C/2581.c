#include <stdio.h>

int main(void) {
	int M, N, sum = 0, min = 100000;

	scanf("%d", &M);
	scanf("%d", &N);

	for (int i = M; i <= N; i++) {
		int cnt = 0;
		for (int j = 1; j < i + 1; j++) {
			if (i % j == 0) {
				cnt = cnt + 1;
			}
		}
		if (cnt == 2) {
			sum = sum + i;
			if (i < min) {
				min = i;
			}
		}
	}
	if (min == 100000) {
		printf("-1");
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", min);
	}



	return 0;
}