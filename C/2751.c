#include <stdio.h>
int Arr[1000000] = { 0, };
int tmp[1000000] = { 0, };

void bubble_sort(int head, int tail) {
	int size = tail - head;
	int middle = head + (size / 2.0);

	if (tail - head > 2) {
		bubble_sort(head, middle);
		bubble_sort(middle, tail);
	}

	for (int i = head; i < tail; i++) {
		tmp[i] = Arr[i];
	}

	int h = head, m = middle, cur = head;
	while (cur < tail) {
		if (h == middle) {
			Arr[cur++] = tmp[m++];
			continue;
		}
		if (m == tail) {
			Arr[cur++] = tmp[h++];
			continue;
		}

		if (tmp[h] < tmp[m]) {
			Arr[cur++] = tmp[h++];
		}
		else {
			Arr[cur++] = tmp[m++];
		}
	}
}

int main(void)
{

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &Arr[i]);

	bubble_sort(0, N);
	for (int i = 0; i < N; i++)
		printf("%d\n", Arr[i]);

	return 0;
}