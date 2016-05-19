#include <stdio.h>
#define vragen 6
#define colom 5
#define N 32

int data_1d[N] = {0},data_2d[vragen][colom]={{0}},i,j,l,k=2;

//function to calculate the averige of the question
float averige(j){
  float sum=0;
  for(l=0;l < colom;l++){
    sum += (float)(l+1)*data_2d[j][l];
  }
  return  sum/data_1d[1];
}


int main(void){
//opening the file
FILE *fp;
fp = fopen("evaluatie.txt","r");
for(i=0;i<N;i++){
  fscanf(fp,"%d\n",& data_1d[i]);
}
fclose(fp);

//confurting 1d to 2d array

for(i=0;i<vragen;i++){
  for (j = 0; j < colom; j++) {
    data_2d[i][j] = data_1d[k] ;
    k++;
  }
}

//priting the static lines
printf("Aantal uitgereikte evalaties:\t%d\n",data_1d[0] );
printf("Aantal ingenomen evalaties:\t%d\n",data_1d[1] );
printf("Response is: \t%.1f%%\n",(float)data_1d[1]/(float)data_1d[0]*100 );
printf("\n" );
printf("\tA \t B\t C\t D\t E\tCijfer\topmerking\n" );


//printing the lines per question
for (i = 0; i < vragen; i++) {
  printf("vraag %d\t",(i+1) );
  for (j = 0; j < colom; j++) {
    printf("%d\t ", data_2d[i][j]);
  }
  printf("%.1f\t",averige((float)i) );

  //giving feedback on the averige.
  if( averige((float)i) < 3.0){
    printf("voldoet niet!\n" );
  }
  else if(averige((float)i) < 3.5){
      printf("Aandacht!\n" );
    }
  else{
    printf("voldoet\n" );
  }
}

return 0;
}
