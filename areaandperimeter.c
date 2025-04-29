#include <stdio.h>
int main()
{
    int length,width,area,perimeter;
    printf("Enter the length:\t");
    scanf("%d",&length);
    printf("Enter the width: \t");
    scanf("%d",&width);
    area= length*width;
    perimeter=2*(length+width);
    printf("Area of the rectangle : %d \n",area);
    printf("Perimeter of the rectangle : %d",perimeter);
    return 0;
}