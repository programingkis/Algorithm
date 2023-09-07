#include <stdio.h>

int main(void) {
	int H, M;

	scanf("%d %d", &H, &M);
	
	if (M-45 < 0) {
		H = H - 1;
		if (H < 0) {
			printf("%d %d", 24 + H, 60+(M-45));
			return 0;
		}
		else {
			printf("%d %d", H, 60 + (M - 45));
			return 0;
		}
	}
	else {
		printf("%d %d", H, M-45);
	}
	return 0;
}