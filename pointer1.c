#include<stdio.h>
int main()
{
	int num,*iptr=NULL;
	char ch,*cptr=NULL;
	float f=9.8,*fptr=NULL;
	iptr=&num;//address of num'slocation
	cptr=&ch;
	fptr=&f;
	printf("\nEnter num");
	scanf("%d",iptr);
	printf("\nEnter ch");
	fflush(stdin);
	scanf("%c",cptr);
	printf("\nnum = %d    %d",num,*iptr);
	printf("\nch = %c    %c",ch,*cptr);
	printf("\nf = %f    %f",f,*fptr);
	
return 0;	
	
}
