#include<stdio.h>
char mystr(char* str,char* sub)
{
    int l,i,j;
  for (i = 0, j = 0; str[i] != '\0' && sub[j] != '\0'; i++)
    {
        if (str[i] == sub[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    if (j == l)
    {
        printf("Substring %s found in string %s", sub,str);
    }
    else
    {
        printf("Substring %s not found in string %s", sub,str);
    }
}
int main()
{
    char str[100],sub[100];
    printf("Enter first string: ");
    gets(str);

    printf("Enter second string: ");
    gets(sub);

    mystr(str,sub);

    return 0;
}
