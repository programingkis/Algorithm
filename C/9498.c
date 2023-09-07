#include <stdio.h>

int main(void) {
	int A;

	scanf("%d", &A);
	if (A >= 60) {
		if (A >= 70) {
			if (A >= 80) {
				if (A >= 90) {
					printf("A");
					return 0;
				}
				printf("B");
				return 0;
			}
			printf("C");
			return 0;
		}
		printf("D");
		return 0;
	}
	else {
		printf("F");
	}
	return 0;
}