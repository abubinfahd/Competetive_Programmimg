#include<stdio.h>
int main(){
    int x, y, z;
    scanf("%d%d%d",&x, &y, &z);
    if(x>y && x>z){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}
