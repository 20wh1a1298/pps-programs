#include <stdio.h>

int main(void) {
    
  // pointer variable to store string
  char *strPtr = "Hello";
  char *t = strPtr;
  
  // print the string
  while(*t != '\0') {
    printf("%c", *t);  
    // move the t pointer to the next memory location
    t++;
  }
  
  return 0;
}
