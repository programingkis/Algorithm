#include <stdio.h>

int main(void) {
	int N,  max = 0,arr[1002];
	float M,total = 0;


	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
			printf("%d\n", max);
		}
	}


	for (int j = 0; j < N; j++) {
		M = arr[j] / (float)max;
		M = M * 100;
		total = total + M;
	}

	printf("%.10f\n", total / N);
	
	
	return 0;

}