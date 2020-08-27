#include<stdio.h>
#include<conio.h>

float getmaterial()
{
    float material;
    printf("Enter the cost of materials : ");
    scanf("%f",&material);
    return material;
}
float getwage()
{
    float wage;
    printf("\nEnter the cost of wage : ");
    scanf("%f",&wage);
    return wage;
}
float getshipment()
{
    float shipment;
    printf("\nEnter the cost of shipment : ");
    scanf("%f",&shipment);
    return shipment;
}

float costprocess(float material, float wage, float shipment)
{
    float cost;
    cost = material+wage+shipment;
    return cost;
}

int main ()
{
    float material,wage,shipment;
    float cost;
    material = getmaterial();
    wage = getwage();
    shipment = getshipment();
    cost = costprocess(material, wage, shipment);
    printf("\nTotal cost : %.2f ",cost);
    getch();
    return 0;
}