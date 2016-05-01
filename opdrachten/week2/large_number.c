#include <stdio.h>

int main(void){

  int a,b,c,d,large,small;
  printf("enter four intergers seperated with a space:" );
  scanf("%d %d %d %d", &a ,&b,&c,&d);

  if (a > b && a > c && a >d ){
    large = a;
  }
  else if (b > c && b >d ){
    large = b;
  }
  else if (c >d ){
    large = c;
  }
  else {
    large = d;
  }


  if (a < b && a < c && a < d ){
    small = a;
  }
  else if (b < c && b < d ){
    small = b;
  }
  else if (c < d ){
    small = c;
  }
  else {
    small = d;
  }

  printf("largerst: %d\n",large );
  printf("smallest: %d\n",small );

}
