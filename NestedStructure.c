#include<stdio.h>
union sample
{
int	num;
char ch;
float f;
}u1;
int main()
{
	u1.num=90;
	printf("%d   %c   %f",u1.num,u1.ch,u1.f);
	u1.ch='$';
	printf("\n%d   %c   %f",u1.num,u1.ch,u1.f);
	u1.f=9.87;
	printf("\n%d   %c   %f",u1.num,u1.ch,u1.f);
	
}
