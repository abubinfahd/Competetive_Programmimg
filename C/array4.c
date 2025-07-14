#include<stdio.h>
int main(){
    int student_number;
    scanf("%d", &student_number);

    int marks[student_number];
    for(int i=0; i<=student_number; i++){
        scanf("%d", &marks[i]);
    }

    for(int i=0;i<=2;i++){
        printf("The values are: %d\n", marks[i]);
    }
    return 0;
}

// start indexing from 0
