#include<stdio.h>
void factorial( int n);//declare 
void main()
{
//	factorial(5);//call
	
}
 void factorial(int x)//definition
 {
 	 int fact=1,i;
 	 
	 for(i=1;i<=x;i++)
 	   fact=fact*i;
 	 printf("factorial of %d is %d",x,fact);
 }
