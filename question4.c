#include<stdio.h>
int rev(int n)
{
    int temp=0,r;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        temp=temp*10+r;
    }
    return temp;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",rev(n));
}
