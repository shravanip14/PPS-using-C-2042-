#include <stdio.h>
int main()
{
    int num1;
    printf("Enter the number:\t");
    scanf("%d",&num1);
    
    if(num1%2==0)
    {
        printf("Number is even");
    }
    
    else
    {
        printf("Number is odd");
    }
    return 0;
}    