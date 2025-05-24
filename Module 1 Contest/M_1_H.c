#include <stdio.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    // Calculate the minimum number of attacks needed
    long long attacks = (A + B - 1) / B;

    printf("%lld\n", attacks);
    return 0;
}
