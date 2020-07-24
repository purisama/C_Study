#include<stdio.h>
#include<conio.h>

int main(void)
{
    int num1 = 15;
    int num2 = 20;
    int num3 = 5;
    int result;
    result = num1+num2*num3;
    printf("%d+%d*%d = %d",num1, num2,num3,result);
    result = (num1+num2)*num3;
    printf("(%d+%d)*%d = %d\n",num1,num2,num3,result);
    result = num1+num2/num3;
    printf("%d+%d/%d = %d\n",num1,num2,num3,result);
    result = (num1+num2)/num3;
    printf("(%d+%d)/%d = %d\n",num1,num2,num3,result);
    result = num1*num2/num3;
    printf("%d*%d/%d = %d\n",num1,num2,num3,result);
    result = (num1*num2)/num3;
    printf("(%d*%d)/%d = %d\n",num1,num2,num3,result);
    result = num1*(num2/num3);
    printf("%d*(%d/%d) = %d\n",num1,num2,num3,result);
    getch();
    return 0;
}