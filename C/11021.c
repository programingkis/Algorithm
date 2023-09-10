#include <stdio.h>

int main(void) {
	int T, A, B;
	char msg[7] = "Case #";
	char point[2] = ":";
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%s%d%s %d\n", msg,i+1,point, A + B);
	}



	
	
	return 0;

}