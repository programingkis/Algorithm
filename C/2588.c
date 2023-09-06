#include <stdio.h>

int main(void) {
	int A, B;

	scanf("%d %d", &A, &B);
	printf("%d\n%d\n%d\n%d", A * (B % 10), A * ((B / 10) % 10), A * (((B / 10) / 10) % 10), A * B);

	return 0;
}