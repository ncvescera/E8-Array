#include <stdio.h>
#include <stdlib.h>
#include "dimOf.h"

/**
* Funzione che restituisce la somma degli elementi dell'array compresi tra i 2 valori
* @param array Array
* @param h Estremo inferiore dell'intervallo
* @param k Estremo superiore dell'intervallo
* @return Somma degli elementi compresi tra i due indici
*/
int sumBetweenIndex(int array[],int h, int k);

int main(){
  int result;
  int array[] = {1,2,3,4,5,6,7,8,9,10};

  result = sumBetweenIndex(array,1,4);

  printf("La soma da h a k e': %d\n",result);

  return(EXIT_SUCCESS);
}

int sumBetweenIndex(int array[], int h, int k){
  int result = 0;

  for(int i = h; i <= k; i++)
    result += array[i];

  return result;
}
