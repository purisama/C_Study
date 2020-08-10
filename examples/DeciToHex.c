#include <stdio.h>
 
int main()
{
    long deci, quotient, remainder;
    int i, j = 0;
    char hexnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &deci);
 
    quotient = deci;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexnum[j++] = 48 + remainder;
        else
            hexnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    for (i = j; i >= 0; i--)
            printf("%c", hexnum[i]);
    return 0;
}