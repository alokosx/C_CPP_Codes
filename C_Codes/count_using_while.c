/* Program to count number of blanks,digits,letters 
and other characters in a file using while loop.
By @alokosx
*/


#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ') 
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            ++letters;
        else
            ++others;
    }
    
    printf("blanks = %d,\n digits = %d,\n letters = %d,\n others = %d.\n\n", blanks, digits, letters, others);
    
    return 0;
}

