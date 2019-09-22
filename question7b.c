#include<stdio.h>
int pat(int n)
{
    int space,i,k;
    space=1;
    for(i=n;i>0;i--)
    {
        for(k=0;k<=space;k++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
        printf("* ");

        }
        space++;
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

