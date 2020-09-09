#include<stdio.h>
#include<conio.h>

int Vtype()
{
    int v;
    printf("Please Enter the number of available vehicles:\n");
    scanf("%d",&v);
    return v;
}

int carcost(int htime)
{
	int cost;
    cost = htime * 20;
    return cost;
}

int buscost(int htime)
{
	int cost;
    cost = htime * 30;
    return cost;
}
int costprint(int vtype,int htime,int cost)
{
    if ( vtype == 2)
    {
        printf("\n\nThe vehicle is: Bus\n");
    }
    else
    {
        printf("\n\nThe vehicle is: Car\n");
    }
    
    printf("Park for: %d Hours.\n",htime);
    printf("Total cost is: %d",cost);
}

int main()
{
    int vtype;
    int cost,v,htime;

    printf("1.Car\n");
    printf("2.Bus\n");

    vtype = Vtype();
    
    if ( vtype == 1 )
    {
        printf ("Please Enter the number of time (Hour):");
        scanf("%d",&htime);    
        cost = carcost(htime);
        costprint(vtype,htime,cost);
    }
    else if ( vtype == 2 ) 
    {    
        printf ("Please Enter the number of time (Hour):");
        scanf("%d",&htime);
        cost = buscost(htime);
        costprint(vtype,htime,cost);
    }
    else 
    {
        printf("\n[[[ERROR : that's number in unavailable]]]\n");
        main();
    }
    getch();
    return 0;
}