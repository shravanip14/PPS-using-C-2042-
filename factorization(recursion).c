#include<stdio.h>
int fact( int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        n=n*fact(n-1);
        return n;
    }
}
int main()

{
    int num ,result;
    printf("enter the number\t");
    scanf("%d",&num);
    result=fact(num);
    printf("factorial of %d is %d",num,result);
     return 0;
}

