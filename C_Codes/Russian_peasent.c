#include <stdio.h>
int main(){
  int l,r;
  int op=0;
    printf("Enter a,b: ");
    scanf("%d %d",&l,&r);
    printf("%d x %d = ",l,r);    
    while(l!=0){
      if(l%2!=0)
        op+=r;
      r*=2;
      l/=2;
    }
    printf("%d\n",op);
  return 0;
}
