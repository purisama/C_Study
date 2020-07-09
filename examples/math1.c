#include <stdio.h> 
#include <conio.h> 
int  main() 
{  
    printf("Add    : 10+15  = %d\n",10+15);   //10+15 ตัวหลัง , คือสูตรที่ใช้คำนวนมาแสดงใน %d 
    printf("Subtract   : 20-15  = %d\n",20-15);  
    printf("Multiply   : 15*12  = %d\n",15*12);    
    printf("Devide (int)  : 75/12  = %d\n",75/12);    
    printf("Devide (float)  : 75./12 = %.2f\n",75./12);     
    getch();   
    return 0; 
}