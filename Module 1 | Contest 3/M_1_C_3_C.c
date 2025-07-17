#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y;
        scanf("%d%d", &x, &y);
        if(x>y){
            int res = x-y;
            printf("%d\n", res);
        }
        else if(y>x){
            int res1 = y-x;
            printf("%d\n", res1);
        }

    }

return 0;
}
