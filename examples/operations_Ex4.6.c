#include<stdio.h>
#include<conio.h>

main ()
{
    int i, j;
    printf("Enter the first number: ");
    scanf("%d", &i);
    printf("Enter the second number: ";)
    scanf("%d", &j);
    // ตัวดำเนินการทางความสัมพันธ์
    printf("i < j %d\n", i<j);
    printf("i <= j %d\n", i<=j);
    printf("i == j %d\n", i==j);
    printf("i > j %d\n", i>j);
    printf("i >= j %d\n", i>=j);
    // ตัวดำเนินการทางลอจิก
    printf("i && j %d\n", i && j);
    printf("i || j", i || j);
    printf("!i !j %d %d\n", !i, !j);
    getch();
}