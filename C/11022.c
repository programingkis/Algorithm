#include <stdio.h>

int main(void) {
	int T, A, B;
	char p[7] = "Case #";

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);

		printf("%s%d: %d + %d = %d\n", p, i + 1, A, B, A + B);
	}

	return 0;
}