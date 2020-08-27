#include<stdio.h>
#include<conio.h>

int gettable()
{
    int table;
    printf("Enter the number of the tables :");
    scanf("%d", &table);
    return table;
}
float getprice()
{
    float price;
    printf("\nEnter the cost per table : ");
    scanf("%f",&price);
    return price;
}
float totalprocess(int table, float price)
{
    float total;
    total = table*price;
    return total;
}
int main ()
{
    int table;
    float price;
    float total;
    table = gettable();
    price = getprice();
    total = totalprocess(table, price);
    printf("\nTotal cost : %.2f",total);
    getch();
    return 0;
}