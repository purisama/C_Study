#include <stdio.h> 
#include <conio.h> 
int  main() 
{  
    int  num1 = 75;  //num1  คือชื่อตัวแปร  
    int  num2 = 12;  //num2  คือชื่อตัวแปร
    float  fnum1 = 75;  //fnum1 คือชื่อตัวแปร
 
    printf("Add    : %d+%d  = %d\n",num1,num2,num1+num2);   //ให้แสดงคือใน %d ตามลำดับของสูตรตัวแปรที่กำหนด
    printf("Subtract   : %d-%d  = %d\n",num1,num2,num1-num2);  
    printf("Multiply   : %d*%d  = %d\n",num1,num2,num1*num2);  
    printf("Devide (int)  : %d/%d  = %d\n",num1,num2,num1/num2);  
    printf("Devide (float)   : %.2f/%d  = %.2f\n",fnum1,num2,fnum1/num2);      
    getch();   
    return 0;    
}