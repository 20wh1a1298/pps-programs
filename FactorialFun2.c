#include<stdio.h>
int factorial();
void main()
{
	int res;
	
	res=factorial();
printf("factorial   is %d",res);
	
}
 int factorial()
 {
 	    int fact=1,i,x;
 	 	printf("\n\n Hello! i'm in Function Factorial'");
 	    printf("\n\n enter n :");
	    scanf("%d",&x);
	    for(i=1;i<=x;i++)
 	       fact=fact*i;
 	    return fact;
}
 
 
