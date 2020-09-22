#include <stdio.h>
#include <conio.h>

int main()
{
    float n1,n2,n3;
    printf("Enter three numbers : \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    if (n1 >= n2 && n1 >= n3 )
    {
        printf("%.2f is the largest number.", n1);
    }
    else if ( n2 >= n1 && n2 >= n3 )
    {
        printf("%.2f is the largest number.", n2);
    }
    else
    {
        printf("%.2f is the largest number.", n3);
    }
    
    getch();
    return 0;
}