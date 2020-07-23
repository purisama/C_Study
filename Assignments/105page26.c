#include <stdio.h>
#include <math.h>
#include <conio.h>

int getOption(void)
{

    int option;

    printf("\t########################## MENU ############################\n");
    printf("\t1.Triangle area \n");
    printf("\t2.Circle area & Circumference \n");
    printf("\t############################################################\n");
    printf("Please enter the number to select the function : ");
    scanf("%d", &option);
    printf("You selected option %d\n",option);
    return option;

}

int triangle()
{
  double a, b, c, s, area;

  printf("Enter sides of a triangle\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  s = (a+b+c)/2; 

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area of the triangle = %.2lf\n", area);

  return 0;
}

int circle() 
{
 
   int rad;
   float PI = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
 
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);

   return (0);
}



main()
{
    int option;
    option = getOption();
    if (option == 1)
    {
        triangle();
    }
    else if (option ==2 )
    {
        circle();
    }
    else
    {
        printf("\n\t\tERROR : Please enter the number of available functions.");
    }
    
    getch();
}