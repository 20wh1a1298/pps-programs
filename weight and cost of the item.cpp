#include<stdio.h>
int main()
{
	int number;
	float price, weight;
	printf("enter no.of units\n");
	scanf("%d",&number);
	printf("enter price and weight of a unit\n");
	scanf("%f%f",&price,&weight);
	printf("net weight=%f\n total price= %f", weight*number,price*number);
	return 0;
}
