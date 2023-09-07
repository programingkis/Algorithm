#include <stdio.h>

int main(void) {
	int A;

	scanf("%d", &A);
	if (A % 4 == 0) {
		if (A % 100 != 0 || A % 400 == 0) {
			printf("1");
			return 0;
		}
		printf("0");
		return 0;
	}
	else {
		printf("0");
		
	}
	return 0;
}