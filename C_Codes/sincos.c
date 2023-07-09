#include <stdio.h>
#include <math.h> /* has sin(),abs(),and fabs() */
int main(void)
{
    double interval;
    int i;                                                            double sine,cosine;
    for(i=0;i<=10;i++) // taking values between 0 and 1 as range
    {
        interval = i/10.0;
        sine = sin(interval);
        cosine = cos(interval);
/* here in above lines we called fabs function as interval is
in float */
        printf("sin(%0.3lf) = %0.3lf | cos(%0.3lf) = %0.3lf\n",in>


    }
    return 0;
}
