// Calvin Vriends
// Week 4

#include <stdio.h>
#define vragen 7
#define colom 5
#define N 37

int main(void){
  int data_1d[N],data_2d[vragen][colom],cijfers_per_vraag[vragen][2], i, j, k=2;
  float cijfer;

// Openen en lezen van het bestand naar een 1D Array.
  FILE *fp;
  fp = fopen("evaluatie.txt","r");
  for (i = 0; i < (N); i++) {
    fscanf(fp, "%d", &data_1d[i]);
  }
  fclose(fp);

// Van het 1D array wordt een 2D array gemaakt excl. waarde 1 en 2.
  for (i = 0; i < vragen; i++) {
    for (j = 0; j < colom; j++) {
    data_2d[i][j] = data_1d[k];
    k++;
    }
  }

// Weergave
  printf("Programma week 4 door Calvin Vriends, NP2F.\n\n");
  printf("Aantal uitgereikte evaulaties: \t%d\n", data_1d[0]);
  printf("Aantal ingenomen evaulaties: \t%d\n", data_1d[1]);
  printf("Respons is: \t%.0f%%\n", (((float)data_1d[1]/(float)data_1d[0])*100));

  printf("\n");

  printf("\t\tA \tB \tC \tD \tE \tCijfer \tOpmerking\n");

for (i = 0; i < vragen; i++) {
  printf("Vraag %d ", (i+1));
  for (j = 0; j < colom; j++) {
    printf("\t%d ", data_2d[i][j]);
    cijfers_per_vraag[i][0] += (data_2d[i][j] * (j+1));
    cijfers_per_vraag[i][1] += data_2d[i][j]; //totaal voor gemiddeld
  }

  // Cijfer
  cijfer = (float)cijfers_per_vraag[i][0]/(float)cijfers_per_vraag[i][1];
  printf("\t%.1f", cijfer);

  // Opmerking
  if (cijfer < 3.0) {
    printf("\tVoldoet niet\n");
  }
  else if (cijfer < 3.5) {
    printf("\tAandacht\n");
  }
  else {
    printf("\tVoldoet\n");
  }

}
  return 0;
}
