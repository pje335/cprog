#include <stdio.h>

int main(void){
  int n,z=0,i=1;
  printf("Please enter a maxium value:" );
  scanf("%d", &n);

  while(z<=n){
    z = i * i;
    i++;
    if(z%2 == 0){
      printf("%d\n",z );

    }

  }

}
