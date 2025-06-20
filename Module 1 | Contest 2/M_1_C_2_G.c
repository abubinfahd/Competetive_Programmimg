#include<stdio.h>
int main(){
    int x, y;
    int a, b;
    scanf("%d%d",&x, &y);
    scanf("%d%d",&a, &b);
    if(x+a > y+b){
        printf("Dominater\n");
    }
    else{
        printf("Everule\n");
    }

    return 0;
}
