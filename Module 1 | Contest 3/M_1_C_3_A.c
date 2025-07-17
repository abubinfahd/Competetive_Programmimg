#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d%d", &n, &m);
        if(n>m){
            int res = n-m;
            printf("%d\n", res);
        }
        else{
            printf("0\n");
        }

    }

return 0;
}
