#include<stdio.h>
#include<conio.h>

float costprocess(float n1,float n2)
{
    float cost;
    cost = n1*n2;
    return cost;
}

int main ()
{
    float num,price;
    float cost;
    printf("Enter the number : ");
    scanf("%f",&num);
    printf("\nEnter the price : ");
    scanf("%f",&price);
    cost = costprocess(num, price);
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}