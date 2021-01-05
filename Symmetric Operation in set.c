#include <stdio.h>

int main()
{
    printf("__Symmetric Difference Operation in Set__\n");
    int n,m,x,y;
    ///int i = 0;
    
    printf("\nEnter the Number of Element in 1st Array : ");
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
    
    printf("\nElements of 2nd Array : ");
    for (y=0; y<m; y++)
    {
        printf(" %d" , b[y]);
    }
    //x=0
    // Symmetric Difference Operation

    int c[n+m] , in = 0 , i = 0;

    for (int q = 0; q < n; q++)
    {
        for (int w = 0; w < m; w++)
        {
            if (a[q]==b[w])
            {
                //c[in] = a[x];
                //in++;
                //printf("\n%d%d\n",a[q],b[w]);
                i = 1;
            }  
        }
        if (i == 0)
        {
            c[in] = a[q];
            in++;
        }
        i=0;

    }
    //printf("\n%d\n",in);
    i=0;
     for (int x = 0; x < m; x++)
    {
        for (int y = 0; y < n; y++)
        {
            if (b[x]==a[y])
            {
                //c[in] = b[x];
                //in++;
                i = 1;
            }
        }
         if  (i == 0)
        {
            c[in] = b[x];
            in++;
        }
        i = 0;
    }
    //printf("\n%d\n",in);
    //print intersection outuput
    printf("\nOutput is : ");
    for(int x = 0 ; x < in ; x++)
    {
        printf(" %d" , c[x]);
    }
    
}



