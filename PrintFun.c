#include<stdio.h>

 int print(int);
 main()// calling function
{
	
 int res,a=10;
	res=print(a);
	a=20;//a=10  res =11 call 5 9 11 12 6 9 11 12 7 9 11 12 
	res=print(6); //
	res=print(7);//call
	printf("\n%d",res);

	return 0;
	
	
}
  int print(int x)// formal parameter x=5called function callee
 { 
    
 	printf("\n LIVE,LET LIVE");
 	
 	printf("\nStay Home,Stay safe");
 	x=45;
 	
 	return x;
 	
    
 }
 
