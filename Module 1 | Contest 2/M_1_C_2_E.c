#include<stdio.h>
int main(){
    int x, y;
    scanf("%d%d",&x, &y);
    if(60 <= x && 130>=y){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
