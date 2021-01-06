#include <stdio.h>
#include <conio.h>

int main()
{
	printf("\t__Cartesian Product of Set__");

	int n , m , x , y;

	printf("\nEnter the Number of Element in Set A : ");
	scanf("%d" , & n);

	int A[n];
	printf("\nEnter the Elements :\n");
	for(x = 0; x < n; x++)
	{
		scanf("%d", &A[x]);
	}

	printf("\nElements of Set A :");
	for(y =0; y<n; y++)
	{
		printf(" %d",A[y]);
	}

	printf("\nEnter the Number of Element in Set B : ");
	scanf("%d" , & m);
	int B[m];
	printf("\nEnter the Elements :\n");
	for(x = 0; x < m; x++)
	{
		scanf("%d", & B[x]);
	}

	//print both Array
	

	printf("\nElements of Set B :");
	for(y =0; y<m; y++)
	{
		printf(" %d",B[y]);
	}
	
	printf("\nCartesian Product is \n");
	for(int z = 0; z<n; z++)
	{
		for(int c = 0; c<m; c++)
		{
			printf(" %d , %d\n" , A[z] , B[c]);
		}
	}

	
	return 0;
}
