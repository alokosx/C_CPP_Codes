#include <stdio.h>
long int factorial(int n)
{
 if(n == 0 | n == 1)
  return 1;
 else
  return(factorial(n-1)*n);
}

int main(void)
{
 int how_many = 0,i;
 printf("I want table of factorial upto :");
 scanf("%d",&how_many);

 for(i=0;i<=how_many;i++)
  printf("\n%d!\t=\t%ld\n",i,factorial(i));
 return 0;
}
