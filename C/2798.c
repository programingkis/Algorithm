#include <stdio.h>

int main(void) {
	int N, M, temp,max=0,k;
	int arr[100];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N-2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				temp = arr[i] + arr[j] + arr[k];
				if (temp <= M && temp > max) {
		
					max = temp;
				
				}
			}
		}
	}


	printf("%d", max);
	return 0;




}