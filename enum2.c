#include<stdio.h>
void main()
{
enum WeekDays{Mon=4,tue,wed,thurs,fri=9,sat,sun}days;
int i;  
for(i=Mon;i<=sun;i++)
{
printf("\n %d",i);
}
getch();
}

