#include<stdio.h>
int main()
{  //palindrome
    int n,rem,rev=0,n2;
    printf("enter number to check : ");       //updated
    scanf("%d",&n);
    n2=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n2)
    printf("number is palindrome ");
    else 
    printf(" number is not palindromne");
    
}