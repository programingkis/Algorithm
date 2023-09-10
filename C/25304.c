#include <stdio.h>

int main(void) {
	int total;
	int count_N;
	int price, count;
	int total_price;

	total_price = 0;

	scanf("%d", &total);
	scanf("%d", &count_N);

	for (int i = 0; i < count_N; i++) {
		scanf("%d %d", &price, &count);
		total_price = total_price + (price * count);

	}
	if (total == total_price)
		printf("%s", "Yes");
	else
		printf("%s", "No");


	
	
	return 0;


}