//call by value
#include<stdio.h>
int factorial( int);
void main()
{
	int n,res;
	printf("\n enter n :");
	scanf("%d",&n);// 
	printf("\n\n Going to function Factorial Bye!");
	res=factorial(n);//call
	printf("\n\nfactorial of %d is %d",n,res);
}
 int factorial(int x) 
 {
 	//printf("\n\n Hello! i'm in Function Factorial'");
 	if(x<=1)
 	 return 1;
 	else
 	   return x*factorial(x-1);
 }
 
