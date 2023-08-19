#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIDES 6
#define R_SIDE (rand() % SIDES + 1)
int main(void)
{
    int trials;
    int d1, d2;
    int outcomes[13] = {0};
    const int n_dice = 2;
    srand(clock());
    printf("Enter number of trials: ");
    scanf("%d", &trials);
    for (int j = 0; j < trials; ++j)
        outcomes[(d1 = R_SIDE) + (d2 = R_SIDE)]++;
    printf("Probability:\n");
    for (int j = 2; j < n_dice * SIDES + 1; ++j)
        printf("Sum=%d\tP=%0.3lf\n", j, (double)(outcomes[j]) / trials);
    return 0;
}
