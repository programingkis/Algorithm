#include<stdio.h>
int main(void) {
    char a[100];
    int i, k;

    scanf("%s", a);

    for (i = 0; i < 100; i++) {
        if (a[i] == NULL) {
            break;
        }
        k = i;
    }

    printf("%d", k + 1);



    return 0;
}