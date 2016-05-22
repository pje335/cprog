#include <stdio.h>
#include <math.h>

//calculation the facultie.
double faculteit(double tal){
  double x = (2*tal + 1);
  double fact = x;
  for (double i = (x-1); i >0; i--) {
    fact *= i;
  }
  printf("N factulteit: %lf\n",fact );
return fact;
}

//calculation the power
double macht(double x, double n){
  double y = (2*n + 1);
  return pow(x,y);
}

// calcultion the value for that n
double sommatie( double x,double n){
  double sum;
  sum = pow(-1,n) * macht(x,n) / faculteit(n);
  return sum;
}

//calculation the total value of the calculation tot n.
double total(int n, int x){
  double sinus = 0;
  for(double i = 0; i < n;i++){
    sinus += sommatie(x,i);
  }
  return sinus;
}




int main(void){
char stop = 'n';
int x ,n = 5;

//opening the file to write the values.
FILE *fp;
fp = fopen("taylor.txt","a+");


printf("Dit programma rekent sin(x) uit m.b.v de Taylorreeks.\n\n");

while(stop != 'j'){
printf("voer x in radialen (tussen -pi tot + pi) in: ");
scanf("%d",&x );
printf("\n" );

//printing the output of the calculations and the diffrence.
printf("Taylorreks is: \t \t  %.19lf\n",total(n,x) );
printf("sin(x) functie is: \t  %.19lf\n",sin(x) );
printf("verschil is: \t \t  %.19e",total(n,x) - sin(x) );
printf("\n" );

// asking if the users wishes to continu
printf("stoppen j/n?" );
scanf(" %c", &stop);
printf("\n" );

// aditing the values in the textfile.
fprintf(fp,"%d ",x);
}

//closing the file and program
fclose(fp);
return 0;
}
