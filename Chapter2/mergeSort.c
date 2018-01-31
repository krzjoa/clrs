#include <stdio.h>
#include <string.h>

/* Merge sort*/


void merge(int *array, int p, int q, int r){


  int internalArray[5];

  memcpy(internalArray, array, sizeof(int)*5);
  internalArray[0] = 543;

  for(int i=0; i<5; i++){
    printf("%d\n", internalArray[i]);
  }


  //printf("%d\n", array[p]);

  // for(int i=0; i<5; i++){
  //   printf("%d\n", array[i]);
  // }

}



int main(){

  int testArray[5] =  {99, 23, 1, 89, 10};
  merge(testArray, 1, 2, 3);

  for(int i=0; i<5; i++){
    printf("%d\n", testArray[i]);
  }

}
