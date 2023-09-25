#include <stdio.h>
#include <string.h>

int main(void) {
	char word[102], alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int result[26] = { -1 },num;
	memset(result, -1, sizeof(result));


	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++) {
		num = word[i] - 'a';
		if (result[num] == -1) {
			result[num] = i;
		}

	}
	for (int i = 0; i < sizeof(result)/sizeof(int); i++) {
		printf("%d ", result[i]);
	}

	return 0;

}