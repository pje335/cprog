#include <stdio.h>


int main(void){

  float speed;
  printf("please enter the windspeed in knots:");
  scanf("%f",&speed );

  if (speed < 0) {
    printf("INVALID INPUT!\n" );
  }
  else if (speed < 1) {
    printf("The wind is calm\n" );
  }
  else if(speed <= 3){
    printf("there is a light air\n" );
  }
  else if(speed <= 27){
    printf("there is a Breeze\n" );
  }
  else if(speed <= 47){
    printf("there is a Gale\n" );
  }
  else if(speed <= 63){
    printf("there is a Storm!\n" );
  }
  else{
    printf("THERE IS A HURRICANE!!!! MOVE!!!!\n" );
  }


  return 0;
}
