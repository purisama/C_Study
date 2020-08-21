#include<stdio.h>
#include<conio.h>

float num,price;
float cost;

int main ()
{
    printf("Enter the number : ");
    scanf("%f",&num);
    printf("\nEnter the price : ");
    scanf("%f",&price);
    cost = num*price;
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}