#include <stdio.h>

int main(void) {
	int king=1, queen=1, look=2, shop=2, night=2, pone=8;
	int num1, num2, num3, num4, num5, num6;

	scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
	num1 = king - num1;
	num2 = queen - num2;
	num3 = look - num3;
	num4 = shop - num4;
	num5 = night - num5;
	num6 = pone - num6;
	printf("%d %d %d %d %d %d", num1, num2, num3, num4, num5, num6);





	return 0;
}