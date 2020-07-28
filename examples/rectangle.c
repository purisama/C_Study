#include <stdio.h> 
#include <conio.h> 
int main(void) 
    {  
        int     width, height;  
        float area;  
        printf("Input width : ");  
        scanf("%d", &width);  
        printf("Input height : ");  
        scanf("%d", &height);  
        area = width * height;  
        printf("\nArea of rectangle : %.2f\n",area);  
        getch();  
        return 0; 
    }