#include <stdio.h>

int main(void){


  int n,o,p,q,r,s;

  /* promting the user for input */
  printf("Enter a number between 0 and 32767:" );
  scanf("%d",&n );

  /* calculating the values*/
  o = n % 8;
  n /= 8;
  p = n % 8;
  n /= 8;
  q = n % 8;
  n /= 8;
  r = n % 8;
  n /= 8;
  s = n % 8;

  /*printng the value in octaal*/
  printf("In octal, your number is: %d%d%d%d%d \n",s,r,q,p,o);

  return 0;
}
