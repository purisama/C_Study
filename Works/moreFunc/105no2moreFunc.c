#include<stdio.h>
#include<conio.h>

float costprocess(float n1,float n2)
{
    float cost;
    cost = n1*n2;
    return cost;
}

float gettime()
{
    float time;
    printf("Enter the number of time(Hr.) : ");
    scanf("%f",&time);
    return time;
}
float getprice()
{
    float price;
    printf("\nEnter the price : ");
    scanf("%f",&price);
    return price;
}
int main ()
{
    float time,price;
    float cost;
    return price;
    time = gettime();
    price = getprice();
    cost = costprocess(time, price);
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}