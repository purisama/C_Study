#include<stdio.h>
#include<conio.h>

int time,price = 450;
float result;

int main ()
{
    printf("Enter the number of time (Hour) : ");
    scanf("%d",&time);
    result = time*price;
    printf("\nTotal cost : %.2f",result);
    getch();
    return 0;
}