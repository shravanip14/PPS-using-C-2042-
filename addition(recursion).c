#include <stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        n=n+sum(n-1);
        return n;
    }
}
int main()
{
    int addition;
    addition=sum(5);
    printf("%d",addition);
    return 0;
}
