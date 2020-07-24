#include<stdio.h>
#include<conio.h>

int FeetToInches()
{
		int feet,inches; 
		printf("Enter the value of feet: "); 
		scanf("%d",&feet); 
		
		inches=feet*12; 
		
		printf("Total inches will be: %d\n",inches); 
		getch ();
		return 0;
}

int main()
{
		int feet,inches; 
		FeetToInches();
		
}