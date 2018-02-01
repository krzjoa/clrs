#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* Merge sort*/


void merge(int *array, int p, int q, int r){

  // Number of elements in two lists
  int n1 = q - p + 1;
  int n2 = r - q;

  // New arrays
  int *L, *R;
  L = malloc(n1 * sizeof(int));
  R = malloc(n2 * sizeof(int));

  // Filling lists with elements
  for(int i=0; i<n1; i++){
      L[i] = array[p+i];
  }

  for(int i=0; i<n2; i++){
    R[i] = array[q+i];
  }

  // Assign big values to the last elements of the lists
  uintmax_t tmp;

  L[n1] = tmp;
  R[n2] = tmp;

  for(int i=0; i<4; i++){
    printf("%d\n", L[i]);
  }


  //int internalArray[5];

  // memcpy(internalArray, array, sizeof(int)*5);
  // internalArray[0] = 543;
  //



  //printf("%d\n", array[p]);

  // for(int i=0; i<5; i++){
  //   printf("%d\n", array[i]);
  // }

}



int main(){

  int testArray[10] =  {99, 23, 1, 89, 10, 6, 84, 34, 26, 45};
  merge(testArray, 0, 2, 4);

  for(int i=0; i<5; i++){
    printf("%d\n", testArray[i]);
  }

}
