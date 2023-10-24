#include <stdio.h>

int main(void) {
	int a,b,c,d,num;
	int T, test;

	scanf("%d", &T);


	for (int i = 0; i < T; i++) {
		a = 25;
		b = 10;
		c = 5;
		d = 1;
		scanf("%d", &test);
		num = test % a;
		a = test / a;
		test = num % b;
		b = num / b;
		num = test % c;
		c = test / c;
		d = num / d;
		printf("%d %d %d %d\n", a, b, c, d);
	}








	return 0;
}