#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1000001];
	int count_arr[26] = { 0, };
	int max=0, cnt=0,b;
	int index;

	scanf("%s", arr);
	b = strlen(arr);
	for (int i = 0; i < b; i++) {
		arr[i] = toupper(arr[i]);
	}

	for (int i = 0; i < b; i++) {
		count_arr[arr[i] - 'A'] += 1;
	}

	for (int i = 0; i < sizeof(count_arr)/ sizeof(int); i++) {
		if (max < count_arr[i]) {
			max = count_arr[i];

		}
	}
	for (int i = 0; i < sizeof(count_arr)/sizeof(int); i++) {
		if (max == count_arr[i]) {
			cnt += 1;
			index = i;
		}
	}
	if (cnt == 1) {
		printf("%c", index + 'A');
	}
	else if (cnt > 1) {
		printf("?");
	}

	return 0;
}