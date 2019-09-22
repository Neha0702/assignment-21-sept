#include<stdio.h>
int pat(int n)
{
    int space,i,k;
    space=n-1;
    for(i=0;i<=n;i++)
    {
        for(k=0;k<=space;k++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
        printf("* ");

        }
        space--;
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    pat(n);
    return 0;
}
