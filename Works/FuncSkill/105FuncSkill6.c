#include<stdio.h>
#include<conio.h>

float getcost()
{
    float cost;
    printf ("Enter the number of cost : ");
    scanf("%f",&cost);
    return cost;
}
float profitprocess(float cost)
{
    float profit;
    profit = (cost/2.0);
    return profit;
}
float priceprocess(float cost, float profit)
{
    float price;
    price = cost+profit;
    return price;
}

int main ()
{
    float price,cost,profit;
    cost = getcost();
    profit = profitprocess(cost);
    price = priceprocess(cost, profit);
    printf("\nTotal Price : %.2f",price);
    getch();
    return 0;
}