#include <stdio.h>
#include <math.h>
#include <conio.h>

int getOption(void)
{

    int option;

    printf("\t########################## MENU ############################\n");
    printf("\t1.Triangle area \n");
    printf("\t2.Circumference \n");
    printf("\t3.Circle area \n");
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

  return area;
}

int circle() 
{
 
   int rad;
   float PI = 3.14, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   ci = 2 * PI * rad;
   return ci;
}

int circle2() 
{
 
   int rad;
   float PI = 3.14, ciarea;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   ciarea = PI * rad * rad;

   return ciarea;
}



main()
{
	double a, b, c, s, area;
    int option,rad;
    float PI = 3.14, ciarea, ci;
    option = getOption();
    if (option == 1)
    {
        area = triangle();
        printf("Area of the triangle = %.2lf\n", area);
    }
    else if (option ==2 )
    {
        ci = circle();
        printf("\nCircumference : %.2f ", ci);
    }
    else if (option ==3 )
    {
        ciarea = circle2();
        printf("\nArea of circle : %.2f ", ciarea);
    }
    else
    {
        printf("\n\t\tERROR : Please enter the number of available functions.");
    }
    
    getch();
    return 0;
}
