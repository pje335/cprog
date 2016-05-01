/* Filename: tax.c */
/* version : 1.0 */
/* Author : Thomas van der Meulen */
/* Studentnummer: 15020169 */
/* purpose of the programma :  calculate the tax on a givven amount */

#include <stdio.h>

int main(void){

  float pre_tax,TAX, after_tax;
  #define TAX 1.05
  printf("Enter an amount:");
  scanf("%f", &pre_tax );

  after_tax = pre_tax * TAX;
  printf("With tax added: $%.2f \n",after_tax );

  return 0;
}
