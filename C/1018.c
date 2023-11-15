#include <stdio.h>

int main(void) {
	int N, M, min1 = 30001, min2 = 30002,temp =0;
	int cnt1, cnt2, cnt = 30000, cnt3 = 30003;
	char arr[51][51];

	scanf("%d %d", &N, &M);
	
	for (int i = 0; i < N; i++) {
		scanf("%s", &arr[i]);
	}


	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			cnt = 0;
			char color = 'B';
			for (int k = 0; k < 8; k++) {
				for (int p = 0; p < 8; p++) {
					if (arr[i + k][j + p] != color) {
						cnt++;
						if (color == 'B') {
							color = 'W';
						}
						else {
							color = 'B';
						}
					}
					else if(arr[i + k][j + p] == color){
						if (color == 'B') {
							color = 'W';
						}
						else {
							color = 'B';
						}
					}
				}
				if (color == 'B')color = 'W';
				else color = 'B';
			}
			if (cnt <= min1)min1 = cnt;
		}
	}



	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			cnt3 = 0;
			char color = 'W';
			for (int k = 0; k < 8; k++) {
				for (int p = 0; p < 8; p++) {
					if (arr[i + k][j + p] != color) {
						cnt3++;
						if (color == 'B') {
							color = 'W';
						}
						else {
							color = 'B';
						}
					}
					else if (arr[i + k][j + p] == color) {
						if (color == 'B') {
							color = 'W';
						}
						else if (color == 'W') {
							color = 'B';
						}
					}

				}
				if (color == 'B')color = 'W';
				else color = 'B';
			}
			if (cnt3 <= min2)min2 = cnt3;
		}
	}

	if (min1 < min2) {
		printf("%d", min1);

	}
	else {
		printf("%d", min2);
	}


	return 0;
}