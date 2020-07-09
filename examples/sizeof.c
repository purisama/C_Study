#include <stdio.h> 
#include <conio.h> 
#include <ctype.h> 
int main(void) 
{   
    printf("sizeof(char)   %u\n",sizeof(char));         // sizeof(char)  คือฟังก์ชัน แสดงขนาดเป็นไบต์
    printf("sizeof(short int)  %u\n",sizeof(short int));  
    printf("sizeof(unsigned)  %u\n",sizeof(unsigned));  
    printf("sizeof(int)   %u\n",sizeof(int));  
    printf("sizeof(float)   %u\n",sizeof(float));  
    printf("sizeof(double)  %u\n",sizeof(double));  
    printf("sizeof(long)   %u\n",sizeof(long));  
    printf("sizeof(1234)   %u\n",sizeof(1234));  
    printf("sizeof(123.4))   %u\n",sizeof(123.4));  
    printf("sizeof(123.4F)   %u\n",sizeof(123.4F));  
    printf("sizeof('A')   %u\n",sizeof('A'));  
    printf("sizeof(\"A\")   %u\n",sizeof("A"));  
    printf("sizeof(\"Computer\")  %u\n",sizeof("Computer"));  
    getch();  
    return 0; 
} 