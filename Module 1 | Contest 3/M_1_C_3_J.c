#include <stdio.h>
int main() {
    int t, n, x;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &x);
        if(n> x) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    return 0;
}
