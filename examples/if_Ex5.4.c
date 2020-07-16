#include<stdio.h>
#include<conio.h>

main()
{
    int answer;
    printf("What is 3 + 4 =");
    scanf("%d", &answer);
    if(answer == 3+4) //ตรวจค่าตัวแปร
        printf("OK"); //แสดงคำว่า OK หากค่าตัวแปรเป็น true
    printf("Error"); //แสดงคำว่า Error
    getch();
}