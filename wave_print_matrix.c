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
   printf("Input Matrix is :\n");
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){    
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   
   printf("\n");
    printf("wave print of Matrix :\n");
  for(int i=0;i<n;i++){
    if(i%2==0){
    for(int j=0;j<n;j++){    
        printf("%d ",arr[i][j]);
    }
     }
    else{
    for(int j=n-1;j>=0;j--){    
        printf("%d ",arr[i][j]);
    }
    }
    printf("\n");
   }
   return 0;
}