#include <stdio.h>

int main(void) {
	int A, B, V,a;

	scanf("%d %d %d", &A, &B, &V);
	
	a = A - B;
	V = V - A;
	B = V / a;
	if (V % a == 0) {
		printf("%d", B+1);
	}
	else {
		printf("%d", B+2 );
	}




	return 0;
}