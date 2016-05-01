#include <stdio.h>

int main(void){

  int i, gs, group, publischer, item, check;
  /* pomting the user for the isbn */
  printf("Enter Isbn:\t \t " );
  scanf("%d-%d-%d-%d-%d", &gs, &group, &publischer, &item, &check );

  /*Printing the given ISBN in the given types*/
  printf("GS1 prefix: \t \t %d\n", gs );
  printf("Group Identifier: \t %d\n", group );
  printf("Publischer code: \t %d\n", publischer);
  printf("Item number: \t \t %d\n", item );
  printf("Chck Digit: \t \t %d\n", check );


  return 0;
}
