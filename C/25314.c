#include <stdio.h>

int main(void) {
	int A;
	char B[6] = "long";
	char C[4] = "int";


	scanf("%d", &A);
	for (int i = 0; i < A / 4; i++) {
		printf("%s ", B);

	}
	printf("%s", C);





	return 0;
}