#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *transpose,i,j,r,c; //declaring pointers
	printf("\n How many rows and columns in the matrix:- ");
	scanf(" %d %d",&r,&c);//read no. of rows=2, cols=3
//allocating memory by using dynamic memory allocation
	transpose=(int*)calloc(r*c,sizeof(int)); 
	printf("\n Enter the elements:- ");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)  
	{
	scanf("%d",transpose+(i*c+j)*sizeof(int));//row no.*no.of columns+column no.
	}
	printf("\n The  matrix is:- \n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		printf("%5d",*(transpose+(i*c+j)*sizeof(int)));//actual
	printf("\n");
	}

    printf("\n The transpose of matrix is:- \n");
	for(i=0;i<c;i++)
	{
	for(j=0;j<r;j++)
		printf("%5d",*(transpose+(j*c+i)*sizeof(int)));//prints transpose
	printf("\n");
	}
	return 0;
}

	
	
