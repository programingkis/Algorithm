#include <stdio.h>

int main(void) {
	int T;
	char arr[1002],a;



	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s", arr);
		for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++) {
			if (arr[k] == '\0') {
				a = arr[k-1];
				break;
			}
		}
		printf("%c%c\n", arr[0], a);


	}




	return 0;
}