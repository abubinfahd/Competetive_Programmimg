#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n + 1];

        for (int i = 1; i <= n; i++) {
            scanf("%d", &arr[i]);
        }

        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (arr[i] % 2 == 1) {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
