#include<stdio.h> 
#include<conio.h> 
int   main() 
{  
    printf("\t\t   Student Grade Report\n\n");  
    printf(" Couse ID \t\tCourse Name \t\t Credit   Grade   Point\n");  
    printf("------------------------------------------------------------------------\n");  
    printf("%8s   %-30s\t %4d\t %4c %9.2f\n","7101201","Principles of Computer Science",3,'C',2.0);  
    printf("%8s   %-30s\t %4d\t %4c %9.2f\n","7101301","Computer Programming",3,'A',4.0);  
    printf("%8s   %-30s\t %4d\t %4c %9.2f\n","7102402","Database Systems",3,'A',4.0);  
    printf("%8s   %-30s\t %4d\t %4c %9.2f\n","7103203","Object-Oriented Analysis and Design",3,'B',3.0); 
    printf("%8s   %-30s\t %4d\t %4c %9.2f\n","7104101","Embedded System Programming",3,'B',3.0);   
    getch();  
    return 0;
}