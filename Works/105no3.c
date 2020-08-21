#include<stdio.h>
#include<conio.h>

float Price,WaterB,ElecB;
float cost;

int main ()
{
    printf("Enter the cost of room : ");
    scanf("%f",&Price);
    printf("\nEnter the cost of water bill : ");
    scanf("%f",&WaterB);
    printf("\nEnter the cost of electricity bill : ");
    scanf("%f",&ElecB);
    cost = Price+WaterB+ElecB;
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}