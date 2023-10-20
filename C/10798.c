#include <stdio.h>
#include <string.h>

int main(void) {
	char A[5][15], arr[16];


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			A[i][j] = '.';
		}

	}
	for (int i = 0; i < 5; i++) {
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++) {
			A[i][j] = arr[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (A[j][i] != '.') {
				printf("%c", A[j][i]);
			}
		}
	}



	return 0;
}