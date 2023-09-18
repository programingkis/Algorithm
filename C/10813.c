#include <stdio.h>

int main(void) {
	int M, N, temp, k, j, arr[101];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}
	for (int p = 0; p < M; p++) {
		scanf("%d %d", &k, &j);
		if (k == j) {
			temp = arr[k - 1];
		}
		else {
			temp = arr[k-1];
			printf("%d\n", temp);
			arr[k-1] = arr[j-1];
			arr[j-1] = temp;
		}
	}
	for (int b = 0; b < N; b++) {

		printf("%d ", arr[b]);

	}

	return 0;
}