#include<stdio.h>
#include<conio.h>

int day,deposit = 500;
float price,cost;

int main()
{
    printf("Enter the number of day : ");
    scanf("%d",&day);
    printf("\nEnter the price : ");
    scanf("%f",&price);
    cost = (day*price)+deposit;
    printf("\nTotal cost : %.2f",cost);
    getch();
    return 0;
}