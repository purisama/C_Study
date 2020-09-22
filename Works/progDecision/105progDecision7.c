#include <stdio.h>
#include <conio.h>

int main()
{
    float ts;
    printf("Enter Total Sale:");
    scanf("%f",&ts);

    if (ts < 1000 )
    {
        printf("\n%.2f",ts);
    }
    else if (ts >= 1000 && ts < 2000)
    {
        printf("\n%.sf",ts+(ts*0.05));
    }
    else if (ts >= 2000 && ts < 5000)
    {
        printf("\n%.sf",ts+(ts*0.10));
    }
    else if (ts >= 5000 && ts < 10000)
    {
        printf("\n%.sf",ts+(ts*0.15));
    }
    else if (ts > 10000 )
    {
        printf("\n%.sf",ts+(ts*0.20));
    }
    else   
    getch();
    return 0;
}