#include <stdio.h>
int main(void)
{
int a = 10,*p = &a;
printf("Adress of pointer is %p or %lu  and is pointed to %d",p,p,*p);
return 0;
}
