#include<stdio.h>
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
  void matlen(int);
  void main()
  {
  int n;
  printf("enter number of lines to be printed");
  scanf("%d",&n);
  matlen(n);
  }
void matlen(int MAX)
{
int initial_direction=UP,n=MAX,p=1;
int r,c,a[MAX][MAX];
int row_right=0,column_down=n-1,row_left=n-1,column_up=0;
for(r=0;r<MAX;r++)
{
for(c=0;c<n;c++)
a[r][c]=0;
}
while(p!=n*n+1)
{
if(initial_direction==UP)
{
r=row_right++;
for(c=0;c<n;c++)
{
if(a[r][c]==0)
a[r][c]==p++;
}
initial_direction=DOWN;
}
else if(initial_direction==DOWN)
{
r=row_left--;
for(c=n-1;c>=0;c--)
{
if(a[r][c]==0)
a[r][c]==p++;
}
initial_direction=LEFT;
}
else if(initial_direction==LEFT)
{
c=column_up++;
for(r=n-1;r>=0;r--)
{
if(a[r][c]==0)
a[r][c]=p++;
}
initial_direction=UP;
}
}
printf("\n\n");
for(r=0;r<MAX;c++)
{
for(c=0;c<MAX;c++)
printf("%4d",a[r][c]);
printf("\n");
}
}
