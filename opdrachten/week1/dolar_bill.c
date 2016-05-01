/* Filename: tax.c */
/* version : 1.1 */
/* Author : Thomas van der Meulen */
/* Studentnummer: 15020169 */
/* purpose of the programma :  calculate how to pay in the least amount of dollars*/

#include <stdio.h>

int main(void){


  /* defining varibles  */
  int amount,twinty, remaining, ten, five, one;
  twinty = 0;
  ten = 0;
  five = 0;
  one = 0;


  /* Ask user input */
  printf("Enter a dollar amount:");
  scanf("%d", &amount );


  /* Calculating the best way to pay, including debug check */
  twinty = amount / 20.0;
  remaining = amount % 20 ;
  printf("%d \n",twinty);
  printf("%d \n",remaining);

  ten = remaining / 10.0;
  remaining = remaining % 10;
   printf("%d \n",ten);
  printf("%d \n",remaining);

  five = remaining / 5.0;
  remaining = remaining % 5;
  printf("%d \n",five);
  printf("%d \n",remaining);

  one = remaining / 1.0;
   printf("%d \n",one);

  /* printh the best way to pay */

  printf("The most efficent way to pay is with:\n" );
  printf("$20 bills:  %d \n", twinty );
  printf("$10 bills:  %d \n", ten );
  printf("$5  bills:  %d \n", five );
  printf("$1  bills:  %d \n", one );
  return 0;
}
