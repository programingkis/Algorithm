#include <stdio.h>
#include <string.h>

int main(void) {
	char a1[3] = "c=", a2[3] = "c-", a3[4] = "dz=", a4[3] = "d-";
	char a5[3] = "lj", a6[3] = "nj", a7[3] = "s=", a8[3] = "z=";

	char arr[101];
	int cnt = 0;

	scanf("%s", &arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'c'&& arr[i + 1] == '=') {
			i = i + 1;
			cnt += 1;
			printf(" a1\n");
		}
		else if (arr[i] == 'c' && arr[i + 1] == '-') {
			i = i + 1;
			cnt += 1;
			printf(" a2\n");
		}
		else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=') {
			i = i + 2;
			cnt += 1;
			printf(" a3\n");
		}
		else if (arr[i] == 'd' && arr[i + 1] == '-') {
			i = i + 1;
			cnt += 1;
			printf(" a4\n");
		}
		else if (arr[i] == 'l' && arr[i + 1] == 'j') {
			i = i + 1;
			cnt += 1;
			printf(" a5\n");
		}
		else if (arr[i] == 'n' && arr[i + 1] == 'j') {
			i = i + 1;
			cnt += 1;
			printf(" a6\n");
		}
		else if (arr[i] == 's' && arr[i + 1] == '=') {
			i = i + 1;
			cnt += 1;
			printf(" a7\n");
		}
		else if (arr[i] == 'z' && arr[i + 1] == '=') {
			i = i + 1;
			cnt += 1;
			printf(" a8\n");
		}
		else {
			cnt += 1;
			printf(" a9\n");
		}
	}



	printf("%d", cnt);



	return 0;
}