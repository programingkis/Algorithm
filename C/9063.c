#include <stdio.h>

int main(void) {
    int N, x1, y1, xmax = -10001, xmin = 10001, ymax = -10001, ymin = 10001;

    scanf("%d", &N);
    if (N != 1) {
        for (int i = 0; i < N; i++) {
            scanf("%d %d", &x1, &y1);
            if (x1 > xmax)xmax = x1;
            if (x1 < xmin)xmin = x1;
            if (y1 > ymax)ymax = y1;
            if (y1 < ymin)ymin = y1;
        }
        printf("%d", (xmax-xmin) * (ymax-ymin));
    }
    else {
        printf("0");
    }



    return 0;
}