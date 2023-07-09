/*
Code to calculate circumference and area of a cricle .
By @alokosx
*/
#include <stdio.h>
#define PI 3.14159
int main(void)
{
 double radius;
 printf("Enter radius:");
 scanf("%lf",&radius);
 printf("\n");
 printf("Circumference of the circle whose radius is %lf is %lf & its area is %lf\n",radius,2*PI*radius,PI*radius*radius);
 return 0;
}
