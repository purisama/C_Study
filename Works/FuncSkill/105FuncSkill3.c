#include<stdio.h>
#include<conio.h>

int gettime()
{
    int time;
    printf("Enter the number of time (Hour) : ");
    scanf("%d",&time);
    return time;
}
float resultprocess(int time, int price)
{
    float result;
    result = time*price;
    return result;
}

int main ()
{
    int time,price = 450;
    float result;
    time = gettime();
    result = resultprocess(time, price);
    printf("\nTotal cost : %.2f",result);
    getch();
    return 0;
}