#include <stdio.h>
#include <stdlib.h>
#include "dimOf.h"
#include "bool.h"

/**
* Funzione che restitusice 1 se nell'array passato non ci sono numeri uguali
* @param array Array
* @param dim Dimenzione dell'array
* @return 1 se tutti i numeri dell'array sono diversi, sennò 0
*/
bool distinti(int array[], int dim);

int main(){
  int array[] = {1,2,3,4,5,23,6,7,8,9,90};

  bool result = distinti(array,sizeOfArray(array));

  if(result)
    printf("Non ci sono numeri uguali all'interno dell'array\n");
  else
    printf("Ci sono dei numeri uguali all'interno dell'array\n");

  return(EXIT_SUCCESS);
}

bool distinti(int array[], int dim){
  bool result = TRUE;

  //escludo l'lultimo numero dato che non può essere confrontato con nessun altro
  //appnena vengono individuati 2 numeri uguali il ciclo si interrompe
  for(int i = 0; i < dim-1 && result; i++){
    for(int k = i+1; k < dim && result; k++){
      if(array[i] == array[k])
        result = FALSE;
    }
  }

  return result;
}
