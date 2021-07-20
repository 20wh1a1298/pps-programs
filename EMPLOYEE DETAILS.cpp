#include<stdio.h>
struct character	
{
	char name[20];
	int num;
	float salary;
}e;
int main()
{ 
     printf("enter employee name= ");
     scanf("%s",&e.name);
     printf("enter employee num=");
     scanf("%d",&e.num);
     printf("enter employee salary=");
     scanf("%d",&e.salary);
     printf("\n employee details: %s %d %d" ,e.name,e.num,e.salary);
    
}
   
