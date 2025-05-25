#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int a = num/100;
    int b = (num/10)%10;
    int c = num%10;

    int abc = 100 * a + 10 * b + c;
    int bca = 100 * b + 10 * c + a;
    int cab = 100 * c + 10 * a + b;

    printf("%d\n", abc + bca + cab);


    return 0;

}
