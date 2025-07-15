#include <stdio.h>
int main() {
    int a, b, x, y;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    int m = a*2+b;
    int r = x*2+y;
    if(m>r){
        printf("Messi\n");
    }
    else if(r>m){
        printf("Ronaldo\n");
    }
    else{
        printf("Equal\n");
    }
    return 0;
}
