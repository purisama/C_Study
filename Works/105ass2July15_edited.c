#include <stdio.h> 
#include <conio.h> 
int  main() 
{  
    printf("Add    : 10+15  = %d\n",10+15);   //10+15 ตัวหลัง , คือสูตรที่ใช้คำนวนมาแสดงใน %d 
    printf("Subtract   : 20-15  = %d\n",20-15);  
    printf("Multiply   : 15*12  = %d\n",15*12);    
    printf("Devide (int)  : 75/12  = %d\n",75/12);    
    printf("Devide (float)  : 75./12 = %.2f\n",75./12);     

    /*
    ผลลัพธ์ที่ได้จากการทำงานของโปรแกรม

        Add             : 10+15  = 25
        Subtract        : 20-15  = 5
        Multiply        : 15*12  = 180
        Devide (int)    : 75/12  = 6
        Devide (float)  : 75./12 = 6.25


    */

    int  num1 = 75;  //num1  คือชื่อตัวแปร  
    int  num2 = 12;  //num2  คือชื่อตัวแปร
    float  fnum1 = 75;  //fnum1 คือชื่อตัวแปร
 
    printf("Add    : %d+%d  = %d\n",num1,num2,num1+num2);   //ให้แสดงคือใน %d ตามลำดับของสูตรตัวแปรที่กำหนด
    printf("Subtract   : %d-%d  = %d\n",num1,num2,num1-num2);  
    printf("Multiply   : %d*%d  = %d\n",num1,num2,num1*num2);  
    printf("Devide (int)  : %d/%d  = %d\n",num1,num2,num1/num2);  
    printf("Devide (float)   : %.2f/%d  = %.2f\n",fnum1,num2,fnum1/num2);  

    /*
    ผลลัพธ์ที่ได้จากการทำงานของโปรแกรม

        Add             : 75+12  = 85
        Subtract        : 75-12  = 63
        Multiply        : 75*12  = 900
        Devide (int)    : 75/12  = 6
        Devide (float)  : 75./12 = 6.25

    */

    getch();   
    return 0; 
}