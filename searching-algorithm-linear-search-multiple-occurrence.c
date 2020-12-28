
#include <stdio.h>

int main()
{
    printf("__Searching Algorithm ( Linear Search )__\n ");
    printf("\n__Coding for Multiple Occurence__\n");    
    //initialise variables
    int n ;
    int a =0 ,i, b , c;
    
    
    printf("\nEnter the Element Availabe in Array : ");
    scanf("%d" , &n);
    
    int arr1[n];
    printf("\nEnter the Elements of an Array : \n");
    for (i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    
    
    printf("Enter the Number You want to Search : \t");
    scanf("%d",&b);
    
    for (a = 0 ; a<n ; a++)
    {
        c = arr1[a];
        if (c==b)
        {
            printf("\nIndex Value is : \t[%d]",a);
            
        }
    }
    
    return 0;
}

