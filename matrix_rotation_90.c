#include<stdio.h>
int main()
{
    int n,arr[10][10],temp;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){    //S commenSt
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
  }
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(k>j){
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            k--;
            j++;
        } 
    }
    printf("Matrix after rotate 90 degre:\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
    return 0;
}