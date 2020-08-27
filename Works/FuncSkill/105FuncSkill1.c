#include<stdio.h>
#include<conio.h>

int table;
float price;
float total;

int main ()
{
    printf("Enter the number of the tables :");
    scanf("%d", &table);
    printf("\nEnter the cost per table : ");
    scanf("%f",&price);
    sum = table*price;
    printf("\nTotal cost : %.2f",total);
    getch();
    return 0;
}