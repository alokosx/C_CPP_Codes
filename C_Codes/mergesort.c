#include <stdio.h>
void print_array(int how_many,int data[],char *str)
{
 int i;

 printf("%s",str);

 for(i=0;i<how_many;i++)
  printf("%d\t",data[i]);
}

void merge(int a[],int b[],int c[],int how_many)
{
 int i=0,j=0,k=0;

 while(i<how_many && j<how_many)
  if(a[i]<b[j])
   c[k++] = a[i++];
  else
   c[k++] = b[j++];
 while(i<how_many)
  c[k++] = a[i++];
 while(j<how_many)
  c[k++] = b[j++];
}

int main(void)
{
 const int SIZE = 5;
 int a[SIZE] = {45,57,69,81,93};
 int b[SIZE] = {44,56,68,80,92};
 int c[2*SIZE];
 print_array(SIZE,a,"My grades are:\n");
 printf("\n\n");
 print_array(SIZE,b,"More grades:\n");
 merge(a,b,c,SIZE);
 printf("\n\n");
 print_array(2*SIZE,c,"My sorted grades are:\n");
 printf("\n\n");
}
