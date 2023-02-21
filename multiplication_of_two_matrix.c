#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],r1,c1,r2,c2,c[10][10];
    printf("Enter the size of first matrix:\n");
    scanf("%d %d",&r1,&c1);
     printf("Enter the size of second matrix:\n");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter the elements of first matrix:\n");
        for (int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
        }
        printf("Enter the elements of second matrix:\n");
        for (int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&a[i][j]);
        }}
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                c[i][j]=0;
                for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Multiple of two matrix is :\n");
        for (int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
      printf("\n");  }
        }
        else printf("multiplication not possible");
        return 0;
}