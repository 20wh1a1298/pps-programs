#include<stdio.h>
int main ()
{
	int x,y,m,d,s;
	printf("enter input\n");
	scanf("%d",&x);
	y=x/365;
	m=(x-(y*365))/30;
	d=(x-(y*365))%30;
	printf("years=%d\nmonths=%d\n",y,m,d);
	return 0;

}
