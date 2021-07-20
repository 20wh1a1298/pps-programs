#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	int marks[3];
};
int main()
{
	struct student s1,s2;
	int i;
	printf("\n enter details of student 1:");
	scanf("%s%d",s1.name,&s1.rollno);
	printf("\n enter 3 subjects marks:");
	for(i=0;i<3;i++)
	    scanf("%d",&s1.marks[i]);
	printf("\n enter details of student 2:");
	scanf("%S%d",s2.name,&s2.rollno);
	printf("\n enter 3 sudjects marks:");
    for(i=0;i<3;i++)
	    scanf("%d",&s2.marks[i]);
	printf("\n the student details are :\n");
	printf("--------------------------------");
	printf("\n  name   rollno   m1  m2  m3");
	printf("\n%s%8d",s1.name,s1.rollno);
	for (i=0;i<3;i++)
	printf("%8d",s1.marks[i]);
	printf("\n%s%8d",s2.name,s2.rollno);
	for (i=0;i<3;i++)
	printf("%8d",s2.marks[i]);
}
