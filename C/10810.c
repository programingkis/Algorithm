#include <stdio.h>

int main(void) {
	int N, M,i,j,k;
	int arr[101] = { 0, };

	scanf("%d %d", &N, &M);
	
	for (int p = 0; p < M; p++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int m = i; m <= j; m++) {
			arr[m] = k;
		}
	}
	for (int i = 1; i <= N; i++) {
		printf("%d ", arr[i]);
	}
	
	
	
	
	return 0;

}