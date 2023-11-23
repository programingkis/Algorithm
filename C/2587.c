#include <stdio.h>

int main(void) {
	int num, total=0, arr[5];
	int temp;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		arr[i] = num;
		total = total + num;

	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("%d\n", total / 5);
	printf("%d",arr[2]);




	return 0;
}