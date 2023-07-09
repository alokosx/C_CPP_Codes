#include <stdio.h>
int myfunc(int x,int y)
{
return x+y;
}

int main(void)
{ int x = 10,y = 20;
  printf("%d",myfunc(x,y));
}
