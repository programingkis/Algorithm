#include <stdio.h>

int main(void) {
	int A;

	while (1) {
		int num = 0;
		scanf("%d", &A);
		if (A == -1)break;
		for (int i = 0; i < A/2; i++) {
			if (A % (i + 1) == 0) {
				num = num + (i + 1);
			}
		}
		if (num == A) {
			printf("%d = ", A);
			for (int i = 0; i < A/2; i++) {
				if (A/2 == i+1) {
					printf("%d\n", i + 1);
				}
				else if (A % (i + 1) == 0) {
					printf("%d + ", i + 1);
				}
			}
		}
		else {
			printf("%d is NOT perfect.\n", A);
		}
	}





	return 0;
}