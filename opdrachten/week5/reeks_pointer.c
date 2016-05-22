#include <stdio.h>
#define N 80

char a[N],*p;
int i,j;

int main(void){
printf("Enter a message (no more than 80 character): ");
for(p=&a[0];p<&a[N];p++){
  *p=getchar();
  if(*p == '\n'){
    break;
  }
}
printf("The reversal is:" );
for(p=&a[N];p>=&a[0];p--){
  printf("%c",*p);
}
printf("\n" );
  return 0;
}
