#include<stdio.h>
#include<conio.h>

float feet;
double cm;

int FeetToCM()
{
    printf("[Convert feet to centimeters]\nInput Feet :");
    scanf("%f",&feet);
    cm = feet*30.48;
    printf("%.2f is %.2f cm.",feet,cm);
    getch();
    return 0;
}
int main()
{
    FeetToCM();
}