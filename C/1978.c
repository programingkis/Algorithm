#include <stdio.h>

int main(void) {
	int a,N,total=0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int cnt = 0;
		scanf("%d", &a);
		for (int j = 1; j <= a; j++) {
			if (a % j == 0) {
				cnt=cnt+1;
			}
		}
		if (cnt == 2) {
			total = total +1;
		}
	}
	printf("%d", total);

	return 0;
}