#include <stdio.h>

int main(void) {
	int a=1,total=0, X, i = 0, cnt = 0;
	int x, y;

	scanf("%d", &X);

	while (1) {
		i = (1 * a);
		if (total == X) break;
		if (cnt == i) {
			a = a+1;
			cnt = 0;
		}

		cnt ++;
		total++;
	}

	x = i % 2;
	y = cnt;
	if (X != 1) {
		if (x == 1) {
			printf("%d/%d", i - cnt + 1, cnt);
		}
		else {
			printf("%d/%d", cnt, i - cnt + 1);
		}

	}
	else {
		printf("1/1");
	}




	return 0;
}