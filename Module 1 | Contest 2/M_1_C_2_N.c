#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X < Y) {
        printf("Old\n");
    } else if (Y < X) {
        printf("New\n");
    } else {
        printf("Same\n");
    }

    return 0;
}
