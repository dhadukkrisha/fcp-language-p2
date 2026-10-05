#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,difference,product,quotient,remainder;
	
	printf("enter");
	scanf("%d",&num1);
	
	printf("enter");
	scanf("%d",&num2);
	
	sum=num1+num2;
	difference=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	remainder=num1%num2;
	
	printf("\naddition=%d",sum);
	printf("\nsubtraction=%d",difference);
	printf("\nmultiplication=%d",product);
	printf("\ndivison=%d",quotient);
	printf("\nmodulus=%d",remainder);
	
	return 0;
}