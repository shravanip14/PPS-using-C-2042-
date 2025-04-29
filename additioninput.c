#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the first number\t");
    scanf("%d",&num1);
    printf("Enter the second number\t");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("sum of %d and %d is %d",num1,num2,sum);
    return 0;
}