#include<stdio.h>
int main()
{
	int sum, num1, num2,diff,prod,rem;
	float num1,div;
	printf("\n Enter 2 integers");
	scanf("%f%d",&num1,&num2);
	sum= num1+num2;
	diff= num1-num2;
	prod=num1*num2;
	//rem=num1%num2;
	
	printf("\n sum = %d\n diff = %d\n div= %f \n rem= %d",sum,diff,prod,rem);
	
	return 0;
}
