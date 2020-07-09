#include <stdio.h> 
#include <conio.h> 
int  main() 
{  
    int  num1 = 75;  
    int  num2 = 12;  
    float  fnum1 = 75;  
    int  result1;  
    float  result2;  
    result1 = num1+num2;    //ทำการกำหนดค่าตัวแปรโดยใช้สมการ ก่อนที่จะเริ่มคำสั่งในบรรทัดต่อไป 
    printf("Add    : %d+%d  = %d\n",num1,num2,result1);  
    result1 = num1-num2;  
    printf("Subtract   : %d-%d  = %d\n",num1,num2,result1);  
    result1 = num1*num2;  
    printf("Multiply   : %d*%d  = %d\n",num1,num2,result1);  
    result1 = num1/num2;  
    printf("Devide (int)  : %d/%d  = %d\n",num1,num2,result1);  
    result2 = fnum1/num2;  
    printf("Devide (float)  : %.2f/%d  = %.2f\n",fnum1,num2,result2);      
    getch();   
    return 0; 
} 