#include <stdio.h>
int main() {
    double r;
    scanf("%lf", &r);

    const double pi = 3.141592653589793;
    double area = pi * r * r;
    double circumference = 2 * pi * r;

    printf("%.6f %.6f\n", area, circumference);

    return 0;
}
