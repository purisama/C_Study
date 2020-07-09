#include<stdio.h>
#include<conio.h>

float inche;
double feet,cm,m;

int main()
{
    printf("Input Inches :");
    scanf("%f",&inche);
    feet = inche/12.0;
    printf("\n%.2f is %.2f feet.",inche,feet);
    cm = feet*30.48;
    printf("\n%.2f is %.2f cm.",inche,cm);
    m = cm/100.0;
    printf("\n%.2f is %.2f m.",inche,m);
    getch();
    return 0;
}