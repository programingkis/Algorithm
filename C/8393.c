#include <stdio.h>

int main(void) {
	int A;
	int sum = 0;
	scanf("%d", &A);

	for (int i = 0; i <= A; i++) {
		sum = sum + i;

	}
	printf("%d", sum);
	
	return 0;

}