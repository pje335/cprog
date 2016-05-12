#include <stdio.h>

float x,value;


/*  computing the value for x given by the user */
float formula(x){
  value = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x + 7*x - 6;
  return value;
}


int main(void){
  /*promting the user for a value of x*/
  printf("Please enther a value for x: ");
  scanf("%f",&x );

  /*printing the computed value*/
  printf("The computed value is: %.2f\n",formula(x) );
  return 0;
}
