#include <stdio.h>
#define N 80

char a[N];
int i,j;

int main(void){
printf("Enter a message (no more than 80 character): ");
for(i=0;i<N;i++){
  a[i]=getchar();
  if(a[i] == '\n'){
    break;
  }
}
printf("The reversal is:\n" );
for(j=N;j>=0;j--){
  printf("%c",a[j]);
}
printf("\n" );
  return 0;
}
