#include <stdio.h>

int main(void) {
	int N,B,last, value,num[10000],i=0;
	char arr[10000];

	scanf("%d %d", &N, &B);

	while (1) {
		num[i] = N % B;
		if (N / B == 0) {
			num[i] = N % B;
			break;
		}
		N = N / B;
		i++;
	}
	for (int j = 0; j <= i; j++) {
		if (num[j] > 9) {
			arr[j] = (num[j] - 10) + 'A';

		}
		else {
			arr[j] = num[j] + '0';

		}
	}
	for (int j = 0; j <= i; j++) {
		printf("%c", arr[i - j]);
	}

	return 0;
}