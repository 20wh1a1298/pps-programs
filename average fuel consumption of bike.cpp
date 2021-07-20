#include<stdio.h>
int main()
{
	int dist;
	float fuel;
	printf("enter distance travelled(in km)and fuel consumed (in litersa)\n");
	scanf("%d%f",&dist,&fuel);
	printf("average fuel consumption=%.2f",(fuel/dist));
	return 0;
	
}
