#include<stdio.h>
#include<conio.h>

int cost,profit;
float price;

int main ()
{
    printf ("Enter the number of cost : ");
    scanf("%d",&cost);
    profit = (cost/2);
    price = cost+profit;
    printf("\nTotal Price : %.2f",price);
    getch();
    return 0;
}