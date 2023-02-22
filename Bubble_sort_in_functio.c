#include<stdio.h>
void swap(int*p,int*q){
    int t=*p;
    *p=*q;
    *q=t;
 }
void bubble(int a[],int n)
{
     for(int i=0;i<n-1;i++)
     for(int j=0;j<n-i-1;j++)
     if(a[j]>a[j+1])
    swap(&a[j+1],&a[j]);
             }
 
int main()
{
    int a[10],n;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble(a,n);
    printf("sorted elements is :\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}