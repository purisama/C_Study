#include <stdio.h>
#include <conio.h>

int getSub()
{
    int s;
    printf("Enter the number of subject : ");
    scanf("%d",&s);
    return s;
}

int calCost(int s)
{
	int cost;
    if (s >= 3)
    {
        cost = s*1800;
    }
    else
    {
        cost = s*2000;
    }
    return cost;
    
}

void printout(int s,int cost)
{
    printf("\nNumber of subject : %d",s);
    printf("\nTotal cost : %d",cost);
}

int main()
{
    int s,cost;

    s = getSub();
    cost = calCost(s);
    printout(s,cost);

    getch();
    return 0;
}