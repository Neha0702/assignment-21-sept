#include<stdio.h>
int cou(int n,int* a,int key)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag++;
        }
    }
    if(flag==0)
    {
     return -1;
    }
    return flag;

}
int main()
{
    int a[100],n,i,key,c;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be found");
    scanf("%d",&key);
    printf("%d",cou(n,a,key));
   return 0;
}
