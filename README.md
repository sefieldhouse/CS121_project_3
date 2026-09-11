# CS121_project_3
## Bubbles and Pointers Sorting Program *Algorithm*

Algorithm for Bubble Sort
set a constant integer MAX gets 9
void printValues
void sort
void swap

create main
  create an array holding values to be sorted, store inside of values[]
  print the before (the values before being switched)
  do a test swap where x = 3 and y = 5
  print them before being swapped
  swap them
  print them after being swapped
  
  sort the values in the array
  print “after” and print the values after being swapped
  return 0
//end main

function sort (int array):
   create integer variables i and j
   for i from zero to MAX - 1:
       for j from zero to MAX - 1:
           if array[j] > array[j+1]:
               swap array[j] with array[j+1]
               printArray(array)
    
void swap(int* a, int*b)
  takes two int pointer parameters
  makes a temporary integer called temp
  set temp to equal the value at a
  a equals the value at b
  b equals the value at temp
//end swap

void printValues(int*) {
  takes an int pointer representing the array
  steps thru the array with a for loop
    print each member of the array
  print a newline at the end
  return void
