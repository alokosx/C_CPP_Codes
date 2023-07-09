#include <stdio.h>
int main(void)
{
 int speed;
 printf("\nEnter speed as integer:");
 scanf("%d",&speed);                                               speed = (speed<=65)?(65):(speed<=70)?(70):(90);
 switch(speed)
 {
  case 65: printf("\nNo speeding ticket.\n");break;
  case 70: printf("\nSpeeding ticket.\n");break;
  case 90: printf("\nExpensive speeding ticket.\n");break;
  default: printf("\nIncorrect speed.\n");break;
 }
 return 0;
}
