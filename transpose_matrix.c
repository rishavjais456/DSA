#include<stdio.h>
int main()
{
    int trans[10][10],n,m;
    printf("Enter the size of matrix:\n");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&trans[i][j]);
        }
    }
    printf("Matrix before transpose:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
     printf("Matrix after transpose:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",trans[j][i]);
        }
        printf("\n");
    }
    return 0;

}