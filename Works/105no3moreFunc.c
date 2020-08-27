#include<stdio.h>
#include<conio.h>

float costprocess(float n1, float n2, float n3)
{
	float sum;
    sum = n1+n2+n3;
    return sum;
}

float getPrice()
{
    float Price;
    printf("Enter the cost of room : ");
    scanf("%f",&Price);
    return Price;
}
float getWaterB()
{
    float WaterB;
    printf("\nEnter the cost of water bill : ");
    scanf("%f",&WaterB);
    return WaterB;
}
float getElecB()
{
    float ElecB;
    printf("\nEnter the cost of electricity bill : ");
    scanf("%f",&ElecB);
    return ElecB;
}

int main ()
{
    float Price,WaterB,ElecB;
    float cost;
    Price = getPrice();
    WaterB = getWaterB();
    ElecB = getElecB();
    cost = costprocess(Price, WaterB, ElecB);
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}