#include <stdio.h>

int i,j,n;


int size(){
  printf("Enter the amount of number you want to add:" );
  scanf("%d",&n );
  return n;
}


float aveg(int a[], int n){
  float sum = 0;
  for(i = 0;i < n;i++){
    sum += a[i];
  }
  return sum/n;
}


int postive(int a[], int n){
  int positive = 0;
  for(i = 0;i < n;i++){
    if (a[i] >= 0 ){
    positive += 1;
    }
  }
  return positive;
}


int largest(int a[], int n){
  int big = a[0];
  for(i = 0;i < n;i++){
    if(a[i] > big){
      big = a[i];
      }
    }
  return big;
}


int main(void){
  size();
  int a[n];
  for(i=0;i <n;i++){
    printf("Please enter you numbers:" );
    scanf("%d",&a[i] );
  }


  printf("The averige size is: %.2f \n",aveg(a,n));
  printf("The number of postive numbers in the array is: %d \n",postive(a,n));
  printf("The biggest number is: %d \n",largest(a,n));

  return 0;
}
