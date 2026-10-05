#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	
	printf("enter temperature in celsius");
	scanf("%f",&celsius);
	
	fahrenheit=(celsius*3/5)+30;
	
	printf("temperature in fahrenheit");
	
	return 0;
}