#include <stdio.h>
int square(int);
int cube(int);
int main(void)
{
    int end = 0,i,j;
    printf("I want squares and cubes from 1 to:");
    scanf("%d",&end);
    printf("\nNumber\tSquare\tCube\n");
    for(i=1;i<=end;i++)
    {
     printf("\n %d \t %d \t %d",i,square(i),cube(i));
    }
    printf("\n\n");
    return 0;
};

int square(int x)
{
    return x*x;
}

int cube(int x)
{
    return x*x*x;
}
