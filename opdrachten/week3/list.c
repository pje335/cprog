#include <stdio.h>

int sum,a[1],n,x;
float averige;

void input(){
  printf("enter the amount of number you want to add:\n" );
  scanf("%d",&n );
  int a[n];
  for(x=1;x <=n;x++){
    scanf("%d ",&a[x] );
  }
  printf("%d\n",a );
}

int aveg(int a[], int n){
  int i, sum = 0;
  for(i = 0;i <n;i++){
    sum += a[x];
  }
  averige = sum / (sizeof(a)/sizeof(a[0]));
  return averige/n;
}


int main(void){

  input();
  aveg();


  return 0;
}
