
#include <stdio.h>
long fibonacci(int n)
{
long f2 = 0,f1 = 1,f_old;
int i;
for(i =0;i<n;i++)
{
  f_old = f2;
  f2 = f2+f1;
  f1 = f_old;
}
return f2;
}

int main(void)
{
int n;
for(n=1;n<=10;n++)
{
  printf("%d term = %ld\n",n,fibonacci(n));
}
return 0;
}
