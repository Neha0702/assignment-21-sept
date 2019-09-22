#include<stdio.h>
void arr(int a[100],int n,int s)
{
    int temp=0,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d",a[s-1]);

}
void main()
{
    int a[100],n,s,i;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the s value");
    scanf("%d",&s);
    arr(a,n,s);
    return 0;
}
