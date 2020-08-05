#include<stdio.h>
#include<conio.h>


int main()
{
	int feet,inches;
    float feet2,inche2;
    double cm,feet3,cm3,m;

		
	printf("Enter the value of feet: ");
	scanf("%d",&feet); 
	inches=feet*12; 
	printf("Total inches will be: %d\n",inches);


    printf("[Convert feet to centimeters]\nInput Feet :");
    scanf("%f",&feet2);
    cm = feet*30.48;
    printf("%.2f is %.2f cm.\n",feet2,cm);


    printf("Input Inches :");
    scanf("%f",&inche2);
    feet3 = inche2/12.0;
    printf("\n%.2f is %.2f feet.",inche2,feet3);
    cm3 = feet3*30.48;
    printf("\n%.2f is %.2f cm.",inche2,cm3);
    m = cm3/100.0;
    printf("\n%.2f is %.2f m.",inche2,m);

    getch();
    return 0;
}