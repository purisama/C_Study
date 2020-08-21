#include<stdio.h>
#include<conio.h>

float time,price;
float cost;

int main ()
{
    printf("Enter the number of time(Hr.) : ");
    scanf("%f",&time);
    printf("\nEnter the price : ");
    scanf("%f",&price);
    cost = time*price;
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}