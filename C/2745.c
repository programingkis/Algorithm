#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	int n,N,arr1[10000],sum=0,b;
	char arr[10000],b1;

	scanf("%s %d", arr, &N);
	n = strlen(arr);

	for (long i = 0; i < n; i++) {
		arr1[i] = (arr[i] - '0');
	}

	for (long i = 0; i < n; i++) {
		if (arr1[i] > 9) {
			b1 = arr1[i] + '0';
			b = (b1 - 'A')+10;
			sum += pow(N, n - i - 1) * b;
		}
		else {
			sum += pow(N, n - i - 1) * arr1[i];
		}
	
	}

	printf("%d", sum);




	return 0;
}