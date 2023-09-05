#include <stdio.h>

int main(void) {
	double A, B;
	scanf("%lf %lf", &A, &B);
	printf("%.10f", (double)A / B);
	return 0;
}