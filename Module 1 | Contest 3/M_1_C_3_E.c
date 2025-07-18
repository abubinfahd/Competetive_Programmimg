#include<stdio.h>
int main(){
    int t, d;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &d);
        if(d>24){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
