#include<stdio.h>
int main()
{           
    int a[10][10],r,c,count=0;                            //updated
    printf("Enter the size of array:\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of matrix :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Given matrix is : \n"); 
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("% d" ,a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==1)
            count++;
       }
    }
    printf("%d",count);
    return 0;
}