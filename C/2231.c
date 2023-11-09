#include <stdio.h>

int main(void) {
	int a, N, cnt,loc=0;
	int sum = 0,sum1,max=0;

	scanf("%d", &a);
	N = a;
	while (1) {
		N = N / 10;
		loc++;
		if (N == 0)break;
	}
	
	cnt = loc * 9;

	for (int i = a - cnt; i <= a; i++) {
		int k = i;
		sum = 0;
		for (int j = 1; j <= loc; j++) {
			sum = sum + (k % 10);
			k = k / 10;
		}
		sum1 = i + sum;

		if (sum1 == a) {
			max = i;
			break;
		}
	}
	if (max !=0) {
		printf("%d", max);
	}
	else {
		printf("0");
	}


	return 0;
}