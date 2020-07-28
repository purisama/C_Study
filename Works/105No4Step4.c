#include<stdio.h>
#include<conio.h>

int material,wage,shipment;
float cost;

int main ()
{
    printf("Enter the cost of materials : ");
    scanf("%d",&material);
    printf("\nEnter the cost of wage : ");
    scanf("%d",&wage);
    printf("\nEnter the cost of shipment : ");
    scanf("%d",&shipment);
    cost = material+wage+shipment;
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}