#include <stdio.h>
float main()
{
  float bs,da,hr,gs;
  printf("Enter the basic salary\t");
  scanf("%f",&bs);
  da=0.4*bs;
  hr=0.2*bs;
  gs=da+hr+bs;
  printf("Dearness allowance :%f\n",da);
  printf("House rent:%f\n",hr);
  printf("Gross salary :%f\n",gs);
  return 0;
}