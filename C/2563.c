#include <stdio.h>
#include <string.h>

int main(void) {
	
	int N, x[100][100] = { 0, }, a, b, total = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a,&b);
		for (int j = 100 - (b + 10); j < 100 - b; j++) {
			for (int k = a; k < a + 10; k++) {
				x[j][k] = 1;
			}
		}

	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (x[i][j] == 1)
				total++;
			}
	}

	printf("%d", total);







	return 0;
}