#include <stdio.h>

/*Insertion sort*/


/* Ascending order.
  Works inplace.
*/

void insertionSort(int *inputArray, size_t size){
  int length = (int) size; //sizeof(inputArray) / sizeof();

  int i, j, key;

  for(j=1; j < length; j++){
    key = inputArray[j];
    i = j - 1;
    while (i > -1 && inputArray[i] > key) {
      inputArray[i + 1] = inputArray[i];
      i--;
    }
    inputArray[i + 1] = key;
  }
}

/*Descending order (excercise 2.1-2)*/

void inversedInserionSort(int *array, size_t size){
  int len = (int) size;
  int i, j, key;

  for(j=1; j<len; j++){
    key = array[j];
    i = j - 1;
    while (i > -1 && array[i] < key) {
      array[i+1]=array[i];
      i--;
    }
    array[i+1] = key;

  }




}


int main(){
  int i;

  int testArray[5] =  {99, 23, 1, 89, 10};
  inversedInserionSort(testArray, sizeof testArray / sizeof * testArray);

  for(i=0; i<5; i++){
    printf("%d\n", testArray[i]);
  }


}
