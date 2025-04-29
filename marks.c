#include  <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks\t");
    scanf("%d",&marks);
    if (marks>=40)
    {
        printf("Pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}