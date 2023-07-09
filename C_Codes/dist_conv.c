/*
Code to convert miles and yards into kilometers.
By @alokosx
*/

#include <stdio.h>

int main()
{
    int miles,yards;
    double kilometers;
    printf("Enter miles,yards:");
    scanf("%d%d",&miles,&yards);
    kilometers = 1.609*(miles+yards/1760.0);
    printf("\n%d miles & %d yards equals %lf kilometers.\n",miles>
    return 0;
}
