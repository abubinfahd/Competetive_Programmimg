#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int arr2d[n][m];

    for(int row=0;row<n;++row){
        for(int col=0;col<m;++col){
            scanf("%d",&arr2d[row][col]);
        }
    }

    for(int row=0;row<n;++row){
        for(int col=m-1;col>=0;--col){
            printf("%d ",arr2d[row][col]);
        }
        printf("\n");
    }


    return 0;
}
