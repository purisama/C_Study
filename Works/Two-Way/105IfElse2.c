#include<stdio.h>
#include<conio.h>

int getW()
{
    int w;
    printf("Enter the number of weight : ");
    scanf("%d",&w);
    return w;
}

int calC(int w)
{
    int cost;
    cost = w*30;
    return cost;
}

int extracost(int cost)
{
    int d;
    int extra;
    printf("\ntype 1 for Special Express type other to cancel. :\n");
    scanf("%d",&d);
    if ( d == 1)
    {
        extra = cost + 20;
    }
    else 
    {
    	extra = cost;
	}
    return extra;
    
}

void printout (int w,int cost)
{
    printf("\nWeight = %d",w);
    printf("\nTotal cost = %d",cost);
}
int main()
{
    int w,ex,cost;
    w = getW();
    cost = calC(w);
    cost = extracost(cost);
    printout(w,cost);
    getch();
    return 0;
}