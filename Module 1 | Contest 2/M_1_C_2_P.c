#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a+b+(a*b);
    if(result == 111){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
