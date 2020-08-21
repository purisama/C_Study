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
    float time,price;
    float cost;
    
    printf("Enter the number of time(Hr.) : ");
    scanf("%f",&time);
    printf("\nEnter the price : ");
    scanf("%f",&price);
    cost = costprocess(time, price);
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}