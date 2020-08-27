#include<stdio.h>
#include<conio.h>

int getday()
{
    int day;
    printf("Enter the number of day : ");
    scanf("%d",&day);
    return day;
}
float getprice()
{
    float price;
    printf("\nEnter the price : ");
    scanf("%f",&price);
    return price;
}

float costprocess(int day, float price,int deposit)
{
    float cost;
    cost = (day*price)+deposit;
    return cost;
}

int main()
{
    int day,deposit = 500;
    float price,cost;
    day = getday();
    price = getprice();
    cost = costprocess(day, price, deposit);
    printf("\nTotal cost : %.2f",cost);
    getch();
    return 0;
}