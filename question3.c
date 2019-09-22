#include<stdio.h>
struct student{
    char name[20];
    int rollno;
};
struct student s[10];
int main()
{
    int i,n;
    printf("enter no of students");
   scanf("%d",&n);
   printf("enter the details");
   for(i=0;i<n;i++)
   {
       printf("\n");
       scanf("%s",s[i].name);
       scanf("%s",&s[i].rollno);
   }
   printf("\ndetails of students");
   for(i=0;i<n;i++)
    {
       printf("\n");
       printf("name:%s\t",s[i].name);
       printf("rollno:%s",&s[i].rollno);
}
return 0;
}
