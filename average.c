#include <stdio.h>
int main()
{
    int num1,num2,num3,avg;
    printf("enter the first number\t");
    scanf("%d",&num1);
    printf("enter the second number\t");
    scanf("%d",&num2);
    printf("enter the third number\t");
    scanf("%d",&num3);
    avg=(num1+num2+num3)/3;
    printf("average of three numbers is %d",avg);
    return 0;

}