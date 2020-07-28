#include<stdio.h>
#include<conio.h>

float price,cost,profit;

int main ()
{
    printf ("Enter the number of cost : ");
    scanf("%f",&cost);
    profit = (cost/.2);
    price = cost+profit;
    printf("\nTotal Price : %.2f",price);
    getch();
    return 0;
}