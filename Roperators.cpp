#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1,num2;
	bool lt,gt,le,ge,eq,neq;
	
	
	printf("\n Enter 2 integers  ");
	scanf("%d%d",&num1,&num2);
	lt=num1<num2;
	gt=num1>num2;
	le=num1<=num2;
	ge=num1>=num2;
	eq=num1==num2;
	neq=num1!=num2;
gt= true;
	
	printf("\n lt = %d\n gt= %d",lt,gt);
	printf("\n le = %d \n ge= %d",le,ge);
	printf("\n eq=%d\n neq= %d",eq,neq);
	
	return 0;
}
