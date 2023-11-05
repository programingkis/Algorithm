#include <stdio.h>

int main(void) {
	int a, b, c, max = 0, least;

	scanf("%d %d %d", &a, &b, &c);

	max = a;
	least = b + c;
	if (b >= max) {
		max = b;
		least = a + c;
	}
	if (c >= max) {
		max = c;
		least = a+b;
	}
	if (max >= least) {
		max = least - 1;
		printf("%d", max + least);
	}
	else if(max<least) {
		printf("%d", max + least);
	}





	return 0;
}