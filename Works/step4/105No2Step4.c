#include <stdio.h>
#include <conio.h>

int weight ,price = 30;
float result;

int main()
{
    printf("Enter the number of weight : ");
    scanf("%d",&weight);
    result = weight*price;
    printf("\nTotal cost : %.2f",result);
    getch();
    return 0;
}