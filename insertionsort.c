// Selection sort in C

#include <stdio.h>

int data[100];
// function to swap the the position of two elements

// function to print an array
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i) 
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


// driver code
int main() 
{
  printf ("\n\t__Sorting Algoritm using Insertion Sort__\t\n\n");
  int n;
  printf ("Enter the Number of Elements in array : ");
  scanf ("%d", &n);
  
  int x;
  for (x = 0; x < n; x++)
    {
      scanf ("%d", &data[x]);
    }
  printf ("\nUnsorted list is : ");
  printArray(data,n);  
  

  for (int step = 1; step < n; step++) 
  {
    int key = data[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < data[j] && j >= 0) 
    {
      data[j + 1] = data[j];
      --j;
    }
    data[j + 1] = key;
  }
  
  printf("Sorted array in Acsending Order:\n");
  printArray(data, n);
}