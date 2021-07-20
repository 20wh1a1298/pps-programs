#include<stdio.h>
int main()
{
	int radius,lenght,breadth;
	float p1,a1,p2,a2;
	printf("enter radius of the circle\n");
	scanf("%d",&radius);
	p1=2*3.14*radius;
	a1 =3.14*radius*radius;
	printf("perimeterof circle=%f\n area of circle=%f\n",p1,a1);
	printf("enter lenght and breadth\n");
	scanf("%d,%d,&lenght,&breadth");
	p2=2*(lenght + breadth);
	a2=lenght*breadth;
	printf("perimeter of rectangle=%f\n area of rectangl=%f\n",p2,a2);
	return 0;
}
