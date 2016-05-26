#include <stdio.h>
#include <math.h>

//calculation the facultie.
double faculteit(double tal){
  double z = (2*tal + 1);
  double fact = z;
  for (double i = (z-1); i > 1; i--) {
    fact *= i;
  }
return fact;
}

//calculation the power
double macht(double x, int n){
  int y = (2*n + 1);
  return pow(x,y);
}



//calculation the total value of the calculation tot n.
double total(int n, double x){
  double sinus = 0;
  for(double i = 0; i < n;i++){
    sinus += pow(-1,i) * macht(x,i) / faculteit(i);
  }
  return sinus;
}

//-----------------------


int main(void){
char stop = 'n';
double x;
const int n = 5;

//opening the file to write the values.
FILE *fp;
fp = fopen("taylor.txt","a+");
fprintf(fp,"X \t \t  \t Taylor \t  \t \t sin(x) \t  \t \t verschil \n");

printf("Dit programma rekent sin(x) uit m.b.v de Taylorreeks.\n\n");

while(stop != 'j'){
printf("voer x in radialen (tussen -pi tot + pi) in: ");
scanf("%lf",&x );
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
fprintf(fp,"%f \t \t %.19lf \t \t %.19lf \t \t %.19e\n",x,total(n,x),sin(x), total(n,x) - sin(x));
}

//closing the file and program
fclose(fp);
return 0;
}
