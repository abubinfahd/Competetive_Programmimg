#include <stdio.h>

int main() {
    char S1, S2, T1, T2;
    scanf(" %c%c %c%c", &S1, &S2, &T1, &T2);

    // Get absolute difference between characters
    int diff1 = S1 - S2;
    if (diff1 < 0) diff1 = -diff1;

    int diff2 = T1 - T2;
    if (diff2 < 0) diff2 = -diff2;

    // In pentagon: neighbors have diff 1 or 4 (like A-B or A-E)
    int first_is_short = (diff1 == 1 || diff1 == 4);
    int second_is_short = (diff2 == 1 || diff2 == 4);

    if (first_is_short == second_is_short)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
