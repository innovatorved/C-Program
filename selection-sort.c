#include <stdio.h>

int data[100];
int printArray (int n);

int main ()
{
    printf ("\n\t__Sorting Algoritm using Selection Sort__\t\n\n");
    int n;
    printf ("Enter the Number of Elements in array : ");
    scanf ("%d", &n);

    int x , y , z , q;
    for (x = 0; x < n; x++)
    {
        scanf ("%d", &data[x]);
    }
    printf ("\nUnsorted list is : ");
    printArray (n);
    int a ,temp , i=0;
    for(x=0; x<n; x++)
    {
        a = x;
        for(y=0; y<n; y++)
        {
            if (data[a] > data[y])
            {
                //
            }
            else
            {
                printf("hlee");
                i = 1;
                a = y;
            }
            printf("\n%d\n",a);
            //printf("\n%d\n",x);
            if(i==1)
            {
                printf("don")
                temp = data[x];
                data[x] = data[a];
                data[a] = temp;
            }
            printArray(n);
            
        }
    }
    printf ("\n\nSorted list is : ");
    printArray(n);
    return 0;
}


int printArray (int n)
{
    int x;
    for (x = 0; x < n; x++)
    {
        printf ("%d ", data[x]);
    }
    printf("\n\n");
}