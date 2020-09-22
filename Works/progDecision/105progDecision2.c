#include <stdio.h>
#include <conio.h>

int main()
{
    float cost,price,diff;
    printf("Enter cost and price numbers : \n");
    scanf("%f",&cost);
    scanf("%f",&price);
    
    if (cost > price)
    {
        diff = cost - price;
    }
    else
    {
        diff = price - cost;
    }

    printf("\nDiff = %.2f",diff);
    
    if ( cost == price)
    {
        printf("\nmake neither profit nor loss.");
    }
    else if ( price > cost )
    {
        printf("\nProfit.");
    }
    else
    {
        printf("\nLoss.");
    }
    
    getch();
    return 0;
}