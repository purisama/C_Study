#include<stdio.h>
#include<conio.h>

main()
{
    int x, m, B1000, B500, B100;
    printf("Input : ");
    scanf("%d", &x);
    B1000 = x / 1000;
    m = x%1000;
    B500 = m%500;
    B100 = m/100;
    printf("B1000 = %d\n", B1000);
    printf("B500 = %d\n", B500);
    printf("B100 = %d\n", B100);
    getch();
}