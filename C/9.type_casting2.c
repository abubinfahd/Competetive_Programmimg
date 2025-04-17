#include<stdio.h>
int main(){
    int a = 5, b= 2;
    double n = a/b;
    printf("%lf\n", n);

    double n1 = (double)a/b;
    printf("%lf\n", n1);

    double n2 = a/(double)b;
    printf("%lf\n", n2);

    return 0;

}
