#include<stdio.h>
int main()
{
	int A[10],i;
	printf("Enter 10 numbers");
	 for(i=0;i<10;i++)
	  scanf("%d",& A[i]);
    printf("\n");
    sum =0;
    for(i=0;i<10;i++)
	  sum+= A[i];
	printf("sum of numbers=%d",sum);
	return 1;   
}
