#include <stdio.h>
enum day{sun,mon,tue,wed,thr,fri,sat};
typedef enum day day;

void print_day(day d)
{
 switch(d)
 {
  case sun:printf("Sunday\n");break;
  case mon:printf("Monday\n");break;
  case tue:printf("Tuesday\n");break;
  case wed:printf("Wednesday\n");break;
  case thr:printf("Thrusday\n");break;
  case fri:printf("Friday\n");break;
  case sat:printf("Saturday\n");break;
  default :printf("This is not a valid day\n");break;
 }
}

day next_day(day d)
{
 return((d+1)%7);
}
int main(void)
{
 day today = sun;
 print_day(today);
 print_day(next_day(today));
 print_day(10);
 return 0;
}
