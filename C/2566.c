#include <stdio.h>

int main(void) {
	int A[9][9],temp1,temp2,max=0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &A[i][j]);
			if (A[i][j] >= max) {
				max = A[i][j];
				temp1 = i+1;
				temp2 = j+1;
			}
		}
	}

	printf("%d\n%d %d", max,temp1,temp2);




	return 0;
}