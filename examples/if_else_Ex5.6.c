#include<stdio.h>
#include<conio.h>

main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); //input ค่าตัวแปร num
    if(num < 0) //ตรวจสอบว่า num < 0 หาก true ทำตามคำสั่งด้านล่าง หาก false ทำตามคำสั่ง else
        printf("number is negative");
    else
        printf("number is positive");
    
    getch();
    
}