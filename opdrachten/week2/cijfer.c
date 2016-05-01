#include <stdio.h>

int main(void){
  int grade;
  printf("Enther nummirical grade: " );
  scanf("%d",&grade );

  if (grade < 0 || grade > 100){
    printf("!!INVALID INPUT!!\n" );
  }

  grade /= 10;


  switch (grade) {
    case 10: printf(" Letter grade: A \n"); break;
    case 9: printf("Letter grade: A\n"); break;
    case 8: printf("Letter grade: B\n"); break;
    case 7: printf("Letter grade: C\n"); break;
    case 6: printf("Letter grade: D\n"); break;
    default: printf("Letter grade: F\n" );
  }

  return 0;
}
