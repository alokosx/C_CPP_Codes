/*
Program to use assert in code
By @alokosx
*/
#include <stdio.h>
#include <assert.h>

int main(void)
{
 double a,b;
 while(1)
 {
  printf("Enter 2 number:");
  scanf("%lf %lf",&a,&b);
  assert(b!=0);
  printf("a/b = %0.3lf\n",a/b);
 }
 return 0;
}
