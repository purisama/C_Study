#include<stdio.h>
#include<conio.h>

int table;
int price;
float sum;

int main ()
{
    printf("Enter the number of the tables :");
    scanf("%d", &table);
    printf("\nEnter the cost per table : ");
    scanf("%d",&price);
    sum = table*price;
    printf("\nTotal cost : %.2f",sum);
    getch();
    return 0;
}