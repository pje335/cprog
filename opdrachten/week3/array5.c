#include <stdio.h>
# define N 5

int main(void){
  int row[N],column[N],l[N][N],x,y;


  for(x=0; x<N;x++){
    printf("Enter row %d: ",x+1);
    for(y=0; y<N;y++){
      scanf("%d",&l[x][y]);
    }
  }

  /*Calculating the rows*/
  printf("\n" );
  for(x=0; x<N;x++){
    row[x] = 0;
    for(y=0; y<N;y++){
      row[x] += l[x][y];
    }

  }

  /*Calculating the coulums*/
  for(x=0; x<N;x++){
    column[x] = 0;
    for(y=0; y<N;y++){
      column[x] += l[y][x];
    }

  }


  printf("total or rows: %d %d %d %d %d \n",row[0],row[1],row[2],row[3],row[4] );
  printf("total or coulums: %d %d %d %d %d \n",column[0],column[1],column[2],column[3],column[4] );
  return 0;
}
