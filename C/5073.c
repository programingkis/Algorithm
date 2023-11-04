#include <stdio.h>

int main(void) {
	int a, b, c;

	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		int max = 0, cal = 0;
		if (a + b + c == 0)break;
		if (a > max) {
			max = a;
			cal = b + c;
			printf("1 max %d\n", max);
		}
		if (b > max) {
			max = b;
			cal = a + c;
			printf("2 max %d\n", max);
		}
		if (c > max) {
			max = c;
			cal = b + a;
			printf("3 max %d\n", max);
		}
		if (max<cal) {
			if (a == b && b == c) {
				printf("Equilateral\n");
			}
			else if (a == b || b == c || a == c) {
				printf("Isosceles\n");
			}
			else if (a != b && b != c && a != c) {
				printf("Scalene\n");
			}
		}
		if (max >= cal) {
			printf("Invalid\n");
		}
	}




	return 0;
}