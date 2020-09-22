#include <stdio.h>
#include <conio.h>

int main()
{
    int car,in,out,cost,time;
    printf("Enter car type\n1.Car\n2.Bus\n3.Truck\n");
    scanf("%d",&car);
    while (car > 3)
    {
        printf("Please enter valid number:");
        scanf("%d",&car);
    }
    printf("\nEnter check in time 0-24 H. :");
    scanf("%d",&in);
    while (in > 24)
    {
        printf("\nPlease enter valid number:");
        scanf("%d",&in);
    }
    printf("\nEnter check out time 0-24 H. ( check out > check in time) :");
    scanf("%d",&out);
    while (out < in)
    {
        printf("\nPlease enter valid number:");
        scanf("%d",&out);
    }

    time = out - in;

    if (car == 1)
    {
        printf("Time = %d",time);
        cost = time*25;
        printf("\nCost = %d",cost);
    }
    else if (car == 2)
    {
        printf("Time = %d",time);
        cost = time*20;
        printf("\nCost = %d",cost);
    }
    else
    {
        printf("Time = %d",time);
        cost = time*15;
        printf("\nCost = %d",cost);        
    }
     
    getch();
    return 0;
}