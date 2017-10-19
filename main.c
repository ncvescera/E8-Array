#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//dimenzione delle righe e delle colonne della matrice
#define DIM_R 3
#define DIM_C 4

/**
* Funzione che restituisci il massimo in una certa colonna della matrice
* @param matrix Matrice
* @param dim_row Dimenzione delle righe della matrice
* @param dim_col Dimenzione delle colonne della matrice
* @param fix_col Colonna da esaminare
* @return Valore massimo all'interno della colonna fissata
*/
int maxInCol(int matrix[DIM_R][DIM_C], int dim_row, int dim_col, int fix_col);

int main() {
  //dichiarazione ed inizializzazione della matrice
  int matrix[DIM_R][DIM_C] = {
    {1,2,3,4},
    {5,80,7,8},
    {9,10,11,12}
  };
  int col;

  //stampo la matrice
  for(int i = 0; i < DIM_R; i++){
    for(int j = 0; j < DIM_C; j++)
      printf("%d\t ",matrix[i][j]);

    printf("\n");
  }

  printf("Inserisci la colonna: ");
  scanf("%d", &col );

  printf("Max in col %d: %d\n",col, maxInCol(matrix,DIM_R, DIM_C, col-1) );

  return(EXIT_SUCCESS);
}

int maxInCol(int matrix[DIM_R][DIM_C], int dim_row, int dim_col, int fix_col){
  int max = INT_MIN;

  for(int i = 0; i < dim_row; i++)
    if(matrix[i][fix_col] > max)
      max = matrix[i][fix_col];

  return max;
}
