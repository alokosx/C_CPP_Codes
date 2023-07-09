/*
Program to check you need umbrella or not using
short-circuit evaluation with if-else statement.
By @alokosx
*/

#include <stdio.h>
int main(void)
{
 int outside,weather;
 printf("\nEnter if outside 1(for yes) or 0(for no):");
 scanf("%d",&outside);
 printf("Enter if its raining(1) or not(0):");
 scanf("%d",&weather);
 if(outside && weather)
   printf("\nPlease use an umbrella.\n");
 else
   printf("\nDress normally.\n");
  return 0;
}
