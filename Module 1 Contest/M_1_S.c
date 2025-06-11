#include <stdio.h>
#include<math.h>
int main() {
    int A, B;
    scanf("%d%d", &A, &B);
    int result = pow(A, B) + pow(B, A);
    printf("%d\n", result);
    return 0;
}
