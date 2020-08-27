#include<stdio.h>
#include<conio.h>

float costprocess(float n1, float n2, float n3)
{
	float sum;
    sum = n1+n2+n3;
    return sum;
}

int main ()
{
    float Price,WaterB,ElecB;
    float cost;

    printf("Enter the cost of room : ");
    scanf("%f",&Price);
    printf("\nEnter the cost of water bill : ");
    scanf("%f",&WaterB);
    printf("\nEnter the cost of electricity bill : ");
    scanf("%f",&ElecB);
    cost = costprocess(Price, WaterB, ElecB);
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}