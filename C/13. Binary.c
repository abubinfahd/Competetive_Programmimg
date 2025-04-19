#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int first = x % 2;
    x = x / 2;
    int second = x % 2;
    x = x / 2;
    int third = x % 2;
    x = x / 2;
    int forth = x % 2;
    x = x / 2;
    printf("Binary %d%d%d%d\n", first, second, third, forth);


    return 0;

}
