#include <stdio.h>

int main(){

    char first[30],last[30],exschool[40],date[20];
    long int id;
    float grade;

    printf("Enter Student ID: ");
    scanf("%d",&id);
    printf("\nEnter First name: ");
    scanf("%s", first);
    printf("\nEnter Last name: ");
    scanf("%s", last);
    printf("\nEnter ex-school name: ");
    scanf("%s", exschool);
    printf("\nEnter birth day: ");
    scanf("%s", date);
    printf("\nEnter grade average: ");
    scanf("%f",&grade);
}