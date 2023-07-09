#include <stdio.h>
void swap(int *a,int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

void print_array(int how_many,int data[],char *str)
{
 int i;
 printf("%s",str);

 for(i = 0;i < how_many;i++)
  printf("%d\t",data[i]);
}

void bubble(int data[],int how_many)
{
 int i,j;
 int go_on;
 for(i=0 ; i<how_many ;i++)
 {
  print_array(how_many,data,"\nInside bubble\n");
  printf("\nEnter a number to continue : ");
  scanf("%d",&go_on);
  for(j=how_many-1;j>i;j--)
   if(data[j-1] > data[j])
    swap(&data[j-1],&data[j]);
  }
 }

int main(void)
{
 int SIZE;
 printf("Enter no. of numbers you want to sort:");
 scanf("%d",&SIZE);
 int num[SIZE];
 printf("Enter %d digits which you want to sort:\n",SIZE);
 for(int i = 0; i<SIZE ; i++)
    scanf("%d",&num[i]);
 print_array(SIZE,num,"Numbers you entered:\n");
 printf("\n\n");
 bubble(num,SIZE);
 print_array(SIZE,num,"\n\nSorted numbers:\n");
 printf("\n\n");
 return 0;
}
