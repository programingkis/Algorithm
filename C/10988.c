#include <stdio.h>
#include <string.h>

int main(void) {
	int k, j;
	char arr[101];


	scanf("%s", &arr);
	k = strlen(arr)-1;

	if (strlen(arr) % 2 == 1) {
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] != arr[k]) {
				printf("0");
				break;
			}
			if (i == k) {
				printf("1");
				break;
			}
			k -= 1;
		}
	}
	else if (strlen(arr) % 2 == 0) {
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] != arr[k]) {
				printf("0");
				break;
			}
			if (i > k) {
				printf("1");
				break;
			}
			k -= 1;

		}
	}
	


	return 0;
}