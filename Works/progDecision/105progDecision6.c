#include <stdio.h>
#include <conio.h>

int main()
{
    int score;
    printf("Enter score:");
    scanf("%d",&score);

    if (score < 50 )
    {
        printf("\nF");
    }
    else if (score >= 50 && score < 60)
    {
        printf("\nD");
    }
    else if (score >= 60 && score < 70)
    {
        printf("\nC");
    }
    else if (score >= 70 && score < 80)
    {
        printf("\nB");
    }
    else
    {
        printf("\nA");
    }
    
    getch();
    return 0;
}