#include <stdio.h>

int main(void) {
	int N, score[10001], member;
	int temp;

	scanf("%d %d", &N, &member);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (score[i] < score[j]) {
				temp = score[j];
				score[j] = score[i];
				score[i] = temp;
			}
		}
	}

	printf("%d", score[member - 1]);





	return 0;
}