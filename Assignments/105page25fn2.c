#include<stdio.h>
#include<conio.h>

int ftoin()
{
		int feet,inches;
		
		printf("Enter the value of feet: ");
		scanf("%d",&feet); 
		inches=feet*12; 
		printf("Total inches will be: %d\n",inches);

}


int ftoc()
{
    float feet;
    double cm;
    printf("[Convert feet to centimeters]\nInput Feet :");
    scanf("%f",&feet);
    cm = feet*30.48;
    printf("%.2f is %.2f cm.\n",feet,cm);

}

int itofcmm()
{
    float inche;
    double feet,cm,m;
    printf("Input Inches :");
    scanf("%f",&inche);
    feet = inche/12.0;
    printf("\n%.2f is %.2f feet.",inche,feet);
    cm = feet*30.48;
    printf("\n%.2f is %.2f cm.",inche,cm);
    m = cm/100.0;
    printf("\n%.2f is %.2f m.",inche,m);

}

int main()
{
    ftoin();
    ftoc();
    itofcmm();
    getch();
    return 0;
}