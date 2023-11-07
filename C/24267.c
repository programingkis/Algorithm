#include <stdio.h>

int main(void) {
	long long a,b;

	scanf("%lld", &a);
	b = (a - 1) * (a - 2) * (a);
	printf("%lld\n3", b / 6);

	return 0;
}