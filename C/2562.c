#include <stdio.h>

int main(void) {
	int A=0,B=0;
	int arr[11];

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (A < arr[i]) {
			A = arr[i];
			B = i + 1;
		}
	}


	printf("%d\n%d", A, B);



	return 0;

}