#include <stdio.h>

int main(void) {
	int a,cnt =0,b =1,c=1,i=1;

	scanf("%d", &a);
	if (a != 1) {
		while (1) {

			if (c > b + 6 * i) {
				b = b + 6 * i;
				cnt += 1;
				i++;
			}
			if (c == a) break;

			c += 1;
		}
	}
	else {
		cnt = -1;
	}
	printf("%d", cnt+2);



	return 0;
}