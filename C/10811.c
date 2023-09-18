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
			for (int c = 0; c < (j - k - c); c++) {
				if ((k - 1 + c) > (j - 1 + c)) {
					break;
				}
				else if (k - 1 + c == j - 1 + c) {
					temp = arr[k - 1 + c];
				}
				else {
					temp = arr[k - 1 + c];
					arr[k - 1 + c] = arr[j - 1 - c];
					arr[j - 1 - c] = temp;
				}


			}
		}
	}
	for (int b = 0; b < N; b++) {

		printf("%d ", arr[b]);

	}

	return 0;
}