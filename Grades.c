#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks\t");
    scanf("%d",&marks);
    if(marks>100)
    {
        printf("Invalid marks, Please enter the valid marks");

    }
    else if(marks>=90)
    {
        printf("Excellent");
    }
    else if(marks>=80)
    {
        printf("Grade A");
    }
    else if(marks>=70)
    {
        printf("grade B");
    }
    else if(marks>=60)
    {
        printf("grade C");
    }
    
    else if(marks>=50)
    {
        printf("grade D");
    }
    else if(marks>=40)
    {
        printf("grade E");
    }
    else if(marks<=0)
    {
        printf("invalied marks ,Please enter the valid marks");
    }
    else 
    {
        printf("FAIL");
    }
    
    return 0;


}