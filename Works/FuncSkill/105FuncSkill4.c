#include<stdio.h>
#include<conio.h>

float material,wage,shipment;
float cost;

int main ()
{
    printf("Enter the cost of materials : ");
    scanf("%f",&material);
    printf("\nEnter the cost of wage : ");
    scanf("%f",&wage);
    printf("\nEnter the cost of shipment : ");
    scanf("%f",&shipment);
    cost = material+wage+shipment;
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}