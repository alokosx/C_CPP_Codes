#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0,totalchars = 0;
    int c;

    for(;(c = getchar())!=EOF;totalchars++)
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

    printf(" Blanks = %d,\n Digits = %d,\n Letters = %d,\n Others = %d\n Total chars = %d\n\n", blanks, digits, letters, others, totalchars);

    return 0;
}
