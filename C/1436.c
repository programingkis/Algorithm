#include <stdio.h>

int main(void) {
    int N, cnt1 = 0, cnt2 = 666, cnt3 = 0;
    int div = 10, num1, num;

    scanf("%d", &N);
    num1 = N;

    while (1) {
        num = cnt2;
        for (int i = 0; i < 100000; i++) {
            if (num % div == 6) {
                cnt1++;

                if (cnt1 >= 3) {
                    cnt3++;
                    break;
                }
            }
            else {
                cnt1 = 0;
            }

            if (num == 0)break;
            num = num / div;
        }

        if (cnt3 == N)break;
        cnt2++;

    }
    printf("%d\n", cnt2);

    return 0;
}