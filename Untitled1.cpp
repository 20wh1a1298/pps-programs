#include<stdio.h>

#include<string.h>
int main()
{
	
	const char str[] = "This is just a string";
	const char ch = 'u';
	char *P;
	p = strchr(str, ch);
	printf("string starting from %c is: %s", ch, p);
	return 0;
}
