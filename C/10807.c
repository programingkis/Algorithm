
#include <stdio.h>

int main() {

    int n;            // ��� ���� �Է��Ұ���
    int a[100];       // �� �Է�
    int v;            // �Է¹����� �߿� v�� �ִ���
    int cnt = 0;     // ���� ī��Ʈ

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &v);

    for (int j = 0; j < n; j++) {
        if (a[j] == v)    // �Է¹��� ������ v�� ���ٸ�
            cnt++;        // cnt�� ī��Ʈ 
    }

    printf("%d", cnt);
}
