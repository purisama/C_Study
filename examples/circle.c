#include<stdio.h>
#include <conio.h>
 
int main() {
 
   int rad;
   float PI = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
 
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);

   getch();
   return (0);
}