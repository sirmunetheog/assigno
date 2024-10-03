/*
Name:Nyagah Elvis Munene
Reg No:CT101/G/22973/24
*/
#include <stdio.h>
int main()
{
	int age;
	float anual_income;
	//prompt the customer to enter their age
	printf("please enter age:");
	scanf("%d",&age);
	//prompt the customer to enter annual_income
	printf("please enter annual_income:");
	scanf("%f",&annual_income);
	
	if(age>=21 and annual_income>=21000){
		printf("congratulations you qualify for a loan");
	}
	else{
		printf("unfortunately we are unable to offer you a loan at this time");
	}
	return 0;
}