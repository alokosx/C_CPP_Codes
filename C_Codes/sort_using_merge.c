#include <stdio.h>
void print_array(int how_many,int data[],char *str)
{
 int i;

 printf("%s",str);

 for(i=0;i<how_many;i++)
  printf("%d\t",data[i]);
}

void merge(int a[],int b[],int c[],int how_many)
/* here a and b are of same size */
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

void mergesort(int key[],int how_many)
/* how_many is in power of 2*/
{
 int j,k;
 int w[how_many];

 for(k=1;k<how_many;k*=2)
 {
  for(j=0;j<how_many;j+=2*k)
   merge(key+j,key+j+k,w+j,k);
  for(j=0;j<how_many;j++)
   key[j] = w[j];
 }
}

int main(void)
{
 int size,i;
 printf("Enter size of array:");
 scanf("%d",&size);
 int a[size];
 printf("Enter %d numbers:\n",size);
 for(i=0;i<size;i++)
  scanf("%d",&a[i]);
 print_array(size,a,"Numbers you entered:\n\n");
 printf("\n\n");
 mergesort(a,size);
 print_array(size,a,"Sorted numbers:\n\n");
 printf("\n\n");
}
