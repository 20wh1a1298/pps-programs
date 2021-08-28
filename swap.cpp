void main()
{
	int *p1=NULL,a1=2,a2=3,*p2=NULL;
	p1 = &a1;
	p2 = &a2;
	printf("valuesof p1 and p2 are : %d %d\n",*p1,*p2);
	printf("after swaping p1 p2 :%d %d",*p2,*p1);
	return 1;
}
