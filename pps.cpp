#include<stdio.h>
struct character
{
	char name[20];
	int rollno;
	float marks;
}s,s1;
int main()
{
	printf("enter student name=");
	scanf("%s",s.name);
	printf("enter student rollno=");
	scanf("%d",s.rollno);
	printf("enter student marks=");
	scanf("%d",s.marks);
	printf("enter student name=");
	scanf("%s",s1.name);
	printf("enter student rollno=");
	scanf("%d",s1.rollno);
	printf("enter student marks=");
	scanf("%d",s1.marks);
	printf("\n student details: %s %d %d",s.name,s.rollno,s.marks, s1.name,s1.rollno,s1.marks);
	
}

