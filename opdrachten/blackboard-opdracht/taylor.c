#include <stdio.h>
#include <math.h>



double faculteit(double tal){
  double x = (2*tal + 1);
  double fact = x;
  for (double i = (x-1); i >0; i--) {
    fact *= i;
  }
return fact;
}

double macht(double x, double n){
  double y = (2*n + 1);
  return pow(x,y);
}

double sommatie( double x,double n){
  double sum;
  sum = pow(-1,n) * macht(x,n) / faculteit(n);
  return sum;
}

double total(int n, int x){
  double sinus = 0;
  for(double i = 0; i < n;i++){
    sinus += sommatie(x,i);
  }
  return sinus;
}

int main(void){
char stop = 'n';
double x ,n = 14;
printf("Dit programma rekent sin(x) uit m.b.v de Taylorreeks.\n\n");

while(stop != 'j'){
printf("voer x in radialen (tussen -pi tot + pi) in: ");
scanf("%lf",&x );
printf("\n" );
printf("Taylorreks is: \t \t  %.19lf\n",total(n,x) );
printf("Taylorreks is: \t \t  %.19lf\n",sin(x) );
printf("verschil is: \t \t  %.19e",total(n,x) - sin(x) );
printf("\n" );

printf("stoppen j/n?" );
scanf(" %c", &stop);
printf("\n" );

}
return 0;
}
