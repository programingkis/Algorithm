#include <stdio.h>

int main(void) {
	int i;
	char S[1002];

	scanf("%s", &S);
	scanf("%d", &i);

	for (int j = 0; j < sizeof(S) / sizeof(S[0]); j++) {
		if (j == i - 1) {
			printf("%c", S[j]);
			break;
		}
	}
	
	
	
	return 0;

}