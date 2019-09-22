#include<stdio.h>
int cou(int* a,int n)
{
    int i,j,k,flag,temp=0;
    for(i=0;i<n;i++)
    {
        flag=0;
        temp=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag++;
                a[j]=temp;
            }
        }
        if(a[i]!=temp)
        {

            printf("%d-%d\n",a[i],flag+1);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            printf("-1");
    }

}
int main()
{
    int a[100],n,i;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    cou(a,n);
    return 0;
}
