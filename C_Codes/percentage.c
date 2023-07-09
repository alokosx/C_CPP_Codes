#include <stdio.h>
int main(void)
{
int SIZE;
printf("Enter number of subjects:\n");
scanf("%d",&SIZE);
int grades[SIZE];
double sum = 0.0;
int i;
printf("\nEnter your grades:\n");
for(i = 0; i<SIZE; i++)
  scanf("%d",&grades[i]);
printf("\nYour grades are:\n");
for(i = 0; i<SIZE; i++)
  printf("%d\t",grades[i]);
printf("\n\n");
                                                                       for(i = 0; i<SIZE; i++)
sum += grades[i];
printf("Your percentage is %.2f %\n\n",sum/SIZE);
return 0;
}
