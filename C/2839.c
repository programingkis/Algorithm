#include <stdio.h>

int main(void) {
	int N, five=0, three=0, least, M,P;
	int min35=100000, min5=100000, min3=100000,min;



	scanf("%d", &N);

	M = N;
	for (int i = 0; i*5 <= N; i++) {
		M = N;
		min = 0;
		P = M - i*5;

		for (int j = 0; j*3 <= P; j++) {
			M = P;
			M = M - j*3;
			if (M == 0) {
				min = i + j;
				if (min35 > min) {
					min35 = min;
				}
			}
		}

	}

	if (min35 < 100000) {
		printf("%d", min35);
	}
	else {
		printf("-1");
	}

	





	return 0;
}