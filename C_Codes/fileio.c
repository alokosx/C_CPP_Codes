#include <stdio.h>
#define MAX 20

void read_data(FILE *ifp,int d[],int *size){
  *size = 0;
  while(fscanf(ifp,"%d",&d[*size])==1)
   (*size)++;
}

void print_data(int d[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d\t",d[i]);
    if((i+1)%10==0) printf("\n");
  }
}

double avg(int d[],int size)
{
  int i;
  double avg=0.0;
  for(i=0;i<size;i++)
   avg+=d[i];
  return(avg/size);
}

int main(void)
{
  int sz;
  FILE *ifp;
  int data[MAX]={100,0};
  ifp = fopen("myhw.txt","r");
  read_data(ifp, data, &sz);
  printf("my %d hw scores are:\n",sz);
  print_data(data,sz);
  printf("\n\n");
  printf("my average score was %10f\n",avg(data,sz));
  fclose(ifp);
  return 0;
}
