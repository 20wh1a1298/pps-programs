#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[100];
	char ch;
	printf("\nEnter a paragraph  :\n");
	for(i=0;str[i]!='$';i++)
	{
	ch = getchar();
	printf("%c",ch);
	}
}
