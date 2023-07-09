#include <stdio.h>
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

int main(void)
{
int a = 10,b = 20;
printf("Before swap:\n%d = \t%p or %lu \n%d = \t%p or %lu\n\n",a,&a,&a,b,&b,&b);
swap(&a,&b);
printf("After swap:\n%d = \t%p or %lu\n%d = \t%p or %lu\n",a,&a,&a,b,&b,&b);
}
