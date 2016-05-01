#include <stdio.h>

int main(void){
  float e=1,n,x=1,a=1,z=1;
  printf("please enter a number for n:" );
  scanf("%f",&n );


for(;z<=n;z++){
  for (;x<=z;x++){
    a *= 1/x;
  }
  e += a;
}
printf("%f\n",e );

return 0;
}
