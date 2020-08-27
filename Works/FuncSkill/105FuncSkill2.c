#include <stdio.h>
#include <conio.h>

int getweight()
{
    int weight;
    printf("Enter the number of weight : ");
    scanf("%d",&weight);
    return weight;
}

float resultprocess(int weight, int price)
{
    float result;
    result = weight*price;
    return result;
}

int main()
{
    int weight ,price = 30;
    float result;
    weight = getweight();
    result = resultprocess(weight, price);
    printf("\nTotal cost : %.2f",result);
    getch();
    return 0;
}