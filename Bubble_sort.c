#include<stdio.h>
int main()
{
    int a[10],n,t;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){           
            if(a[j]>a[j+1]){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    } printf("Elements in sorted form:\n");
     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}