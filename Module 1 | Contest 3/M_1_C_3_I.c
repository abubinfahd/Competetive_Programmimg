#include<stdio.h>
int main(){
    int t, n, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &x);
        int rem = n-x;
        printf("%d\n", rem);
    }

    return 0;
}
