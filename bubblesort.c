// Selection sort in C

#include <stdio.h>

int data[100];
// function to swap the the position of two elements
void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) 
{
  for (int step = 0; step < size - 1; step++) 
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) 
    {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

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
  printf ("\n\t__Sorting Algoritm using Bubble Sort__\t\n\n");
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
  
  
  selectionSort(data, n);
  printf("Sorted array in Acsending Order:\t");
  printArray(data, n);
}