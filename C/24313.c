#include <stdio.h>

int main(void) {
	int a1, a2, c, n0;

	scanf("%d %d", &a1, &a2);
	scanf("%d", &c);
	scanf("%d", &n0);

	if (a1 * n0 + a2 <= c * n0 && c-a1>=0) {
		printf("1");
	}
	else {
		printf("0");
	}







	return 0;
}