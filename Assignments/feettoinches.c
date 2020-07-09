#include<stdio.h>

int main()
{
		int feet,inches; //กำหนดตัวแปร ฟุต และ นิ้ว
		
		printf("Enter the value of feet: "); //แสดงข้อความสำหรับให้ป้อนจำนวน ฟุต 
		scanf("%d",&feet); //กำหนดให้ใส่ค่า input ในตัวแปร feet
		
		inches=feet*12; //สมการแปลงฟุตเป็นนิ้ว
		
		printf("Total inches will be: %d\n",inches); //แสดงข้อความ และค่าของตัวแปลนิ้ว
		return 0;
}