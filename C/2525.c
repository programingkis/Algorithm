#include <stdio.h>

int main(void) {
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	A = A + (C / 60);
	B = B + (C % 60);
	if (B >= 60) {
		A = A + 1;
		B = B - 60;
	}
	if (A > 23) {
		A = A - 24;
		printf("%d %d", A, B);
		return 0;
	}
	else {
		printf("%d %d", A, B);
		
	}
	return 0;

}