#include<stdio.h>
int main(){
    int x, ones;
    scanf("%d", &x);
    ones = x - x/10*10; //x % 10
    printf("ones= %d\n", ones);
    x = x/10;
    int tens = x - x/10*10;//x % 10
    printf("tens = %d\n", tens);

    return 0;

}
