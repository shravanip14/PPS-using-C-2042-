#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number:\t\t");
    scanf("%d",&num1);
    printf("Enter the second number:\t");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("First number is greater:%d",num1);
    }
    else if (num1==num2)
    {
        printf("both are equal");
    }
    else
    {
        printf("second number is greater:%d",num2);
    }
    return 0;
}    