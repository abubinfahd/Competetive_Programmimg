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

    int min_value = values[1];
    int max_value = values[1];

    for(int i=1;i<=n;i++){
        if(values[i] < min_value){
            min_value = values[i];
        }
        if(values[i] > max_value){
            max_value = values[i];
        }
    }


    printf("Sum:%d\n", sum);
    printf("Min:%d\n", min_value);
    printf("Max:%d\n", max_value);



    return 0;
}
