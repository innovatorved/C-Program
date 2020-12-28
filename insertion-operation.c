#include <stdio.h>

int main()
{
    printf("__Intersection Operation in Set__\n");
    int n,m,x,y;
    
    printf("Enter the Number of Element in 1st Array : ");
    scanf("%d",&n);
    
    int a[n];
    printf("\nEnter the Elements of an Array : \n");
    for (x=0; x<n; x++)
    {
        scanf("%d",&a[x]);
        
    }
    
    printf("\nEnter the Number of Element in 2nd Array : ");
    scanf("%d",&m);
    int b[m];
    printf("\nEnter the Elements of an Array : \n");
    for (y=0; y<m; y++)
    {
        scanf("%d",&b[y]);
    }
    
    //x = 0;
    
    // print the element in both Array
    printf("\nElements of 1st Array : ");
    for (y=0; y<n; y++)
    {
        printf(" %d" , a[y]);
    }
    //x = 0;
    
    printf("\nElements of 1st Array : ");
    for (y=0; y<m; y++)
    {
        printf(" %d" , b[y]);
    }
    //x=0;
    
    //Intersection Operation
    int o , p , i = 0;
    int c[n];
    for (x = 0 ; x < n ; x++)
    {
        o = a[x];
        for (y=0; y < m ; y++ )
        {
            p = b [y];
            if (o == p)
            {
                c[i] = o;
                i++;
            }
            
        }
    }
    //print intersection outuput
    printf("\nOutput is : ");
    for(x = 0 ; x<i ; x++)
    {
        printf(" %d" , c[x]);
    }
    
}


