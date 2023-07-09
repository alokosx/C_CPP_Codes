#include <stdio.h>
void myfunc(int x,int y){
int sum;
sum = x+y;
printf("%d",sum);
}

int main(void)
{ int x = 10,y = 20;
  myfunc(x,y);
}
