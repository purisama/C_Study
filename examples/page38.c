#include<stdio.h>
#include<string.h>
#include<conio.h>

int GetAge(); // prototype
void SayHello(); // prototype
void SayGoodbye(); //prototype

int main(void)
{
    int a;
    char name[20];
    printf("What is your name?");
    gets(name);
    a = GetAge();
    SayHello();
    printf("You are %d years old!\n\n",a);
    SayGoodbye();
    return 0;
}

int GetAge()
{
    int age;
    printf("How old are you?");
    scanf("%d",&age);
    return age;
}

void SayHello()
{
    printf("\nHello, How are you?\n");
}

void SayGoodbye()
{
    printf("Have a nice day\n");
    printf("Good Bye...");
}