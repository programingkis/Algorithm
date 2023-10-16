#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101];

	int count, a, b;

	scanf("%d", &count);
	a = count;

	for (int p = 0; p < count; p++) {
		b = 55;
		int num[26] = { 0, };
		scanf("%s", &arr);

		for (int i = 0; i < strlen(arr); i++) {
			if (b != arr[i] - 'a') {
				b = arr[i] - 'a';
				num[arr[i] - 'a'] += 1;
			}
			if (num[arr[i] - 'a'] == 2) {
				a -= 1;
				break;
			}

		}
	}
	printf("%d", a);



	return 0;
}