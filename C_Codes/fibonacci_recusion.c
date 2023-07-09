#include <stdio.h>
long recursive_fibonacci(int n)
{
if(n<=1)
  return n;
else
  return(recursive_fibonacci(n-1)+ recursive_fibonacci(n-2));
}

int main(void)
{
int n;
for(n=1;n<=10;n++)
{
printf("%d term = %ld\n",n,recursive_fibonacci(n));
}
return 0;
}
