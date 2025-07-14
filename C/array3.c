#include<stdio.h>
int main(){
    int marks[3];

    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);

    for(int i=0;i<=2;i++){
        printf("The values are: %d\n", marks[i]);
    }
    return 0;
}

// start indexing from 0
