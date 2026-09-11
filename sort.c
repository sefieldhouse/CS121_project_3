#include <stdio.h>
const int MAX=9;

void printValues(int* values);
void sort(int* values);
int swap(int* a, int* b);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);
/*
  // do the real swapping
  int x = values[0]
  int y = values[1]
  swap(&x, &y);
  printValues(values[]);
  */
  return(0);
} // end main

void sort(int* values) {
  for (int i = 0; i < MAX - 1; i++) {
    for (int j = 0; j < MAX - 1; j++) {
      if (values[j] > values[j+1]) {
        swap(&values[j], &values[j+1]);
	printValues(values);
      }  // end if
    } // end second for
  } // end first for
} // end sort

int swap(int* a, int* b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;

} // end swap

void printValues(int* values) {
  printf("[");
  for (int i=0; i < MAX; i++) {
    printf("%d ", values[i]);
  } // end for
    printf("] \n");
} // end printValues
