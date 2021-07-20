#include<stdio.h>
int main()
{
	int sec,min,hr ;
	printf("enter the value sec:");
	scanf("%d,&sec");
	hr = sec/3600;
	min=sec/60;
	printf("%d:%d:%d", hr, min, sec);
    
}
    


