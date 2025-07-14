#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int values[n+3];
    int sum =  0;

    for(int i=1;i<=n;i++){
        scanf("%d", &values[i]);
    }

    for(int i=1;i<=n;i++){
        sum += values[i];
    }
    printf("%d\n", sum);



    return 0;
}
