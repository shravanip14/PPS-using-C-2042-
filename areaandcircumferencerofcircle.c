#include <stdio.h>
float main()
{
    float radius,area,circumference;
    printf("Enter the radius\t");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area of the circle :%f\n",area);
    printf("circumference of the circle :%f",circumference);
    return 0;
}