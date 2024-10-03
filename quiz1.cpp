#include <stdio.h>
int main()
{
	float principle,time,rate,interest;
	//prompt the user to enter the principle
	printf("enter principle:");
	scanf("%f",&principle);
	//prompt the user to enter the time
	printf("enter the time:");
	scanf("%f",&time);
	//prompt the user to enter the rate
	printf("enter the rate:");
	scanf("%f",&rate);
	//calculate the simple interest
 interest=principle*rate/100*time;
	printf("the interest is:%f",interest);
	return 0;
}