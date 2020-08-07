#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
	double a, b, c, s, area;
    int option,rad,rad2;
    float PI = 3.14, ciarea, ci;

    printf("Enter sides of a triangle\n");
    scanf("%lf%lf%lf", &a, &b, &c);

    s = (a+b+c)/2; 

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the triangle = %.2lf\n", area);

    printf("\nEnter radius of circle: ");
    scanf("%d", &rad);
 
    ciarea = PI * rad * rad;
    printf("\nArea of circle : %.2f ", ciarea);

    printf("\nEnter radius of circle: ");
    scanf("%d", &rad2);
 
    ci = 2 * PI * rad2;
    printf("\nCircumference : %.2f ", ci);

    getch();
    return 0;
}
