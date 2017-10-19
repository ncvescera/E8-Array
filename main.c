#include <stdio.h>
#include <stdlib.h>
#include "bool.h"

#define DIM 4

/**
* Funzione che stabilisce se la matrice passata è diagonale
* @param matrix Matrice
* @param dim Dimenzioe della matrice
* @return 1 se la matrice è diagonale, 0 se non lo è
*/
bool diagonale(int matrix[DIM][DIM], int dim);

int main(){
  //dichiarazione matrice quadrata
  int matrix[DIM][DIM] = {
    {9,0,0,0},
    {0,9,0,0},
    {0,0,9,0},
    {0,0,0,9}
  };
  bool result;

  //stampo la matrice
  for(int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++)
      printf("%d ",matrix[i][j]);

    printf("\n");
  }

  result = diagonale(matrix,DIM);

  if(result)
    printf("La matrice e' diagonale\n");
  else
    printf("La matrice NON e' diagonale\n");

  return(EXIT_SUCCESS);
}

bool diagonale(int matrix[DIM][DIM], int dim){
  bool result = TRUE;

  for(int righe = 0; righe < DIM && result; righe++){
    for(int colonne = 0; colonne < DIM && result; colonne++)
      if(righe != colonne){
        if(matrix[righe][colonne] != 0)
          result = FALSE;
      }
  }

  return result;
}
