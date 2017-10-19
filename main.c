#include <stdio.h>
#include <stdlib.h>
#include "dimOf.h"

/**
* Funzione che dato un array e la sua dimenzione restituisce la media dei suoi elementi
* @param array Array
* @param dim Dimenzione dell'array
* @return media degli elementi dell'array
*/
double media(double array[], int dim);

int main(){
  int result;
  double array[] = {2,4,6};  //array contenente i valori da elaborare

  result = media(array, sizeOfArray(array));

  printf("La media è: %d\n",result);

  return (EXIT_SUCCESS);
}

double media(double array[], int dim){
  double media = 0;
  int i;

  for(i = 0; i < dim; i++)
      media += array[i];

  media /= i;

  return media;
}
