#include<stdio.h>
int main()
{
	float principal,rate,time,simpleinterest;
	
	printf("principal :");
	scanf("%f",&principal);
	
	printf("rate of interest:");
	scanf("%f",&rate);
	
	printf("enter time:");
	scanf("%f",&time);
	
	simpleinterest=(principal*rate*time);
	printf("simpleinterest=%.2f",simpleinterest);
	
	return 0;
}
	