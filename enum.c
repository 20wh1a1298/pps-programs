#include<stdio.h>
enum month{Jan, Feb=3, Mar, Apr, May, Jun, Jul, 
          Aug, Sep, Oct=8, Nov, Dec=9};
  
int main()
{
	int i;
    enum month mon;
   mon=Nov;
   for (i=Jan; i<=Dec; i++)      
      printf("%d ", i);
      
  printf("\nMon =%d ", mon);      
   return 0;
}
