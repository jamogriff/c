#include <stdio.h>

void my_strcopy(char *destination, const char *source);

char strA[80] = "A string to be used for demonstration purposes";
char strB[80] = "12345678901234567890123456789012345678901234567890";

int main(void)
{
    char *pA;
    //char *pB;
    puts(strA);
    pA = strA;
    puts(pA);
    //pB = strB;
    putchar('\n');

    my_strcopy(strB, strA);
    puts(strB);

    return 0;
}

void my_strcopy(char *destination, const char *source)
{
    char *p = destination;

    while (*source != '\0') {
        *p++ = *source++;
    }

    *p = '\0';
}
