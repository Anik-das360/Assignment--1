#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int arr2D[10][10], * arr1D;
	int n, m, i, j;

	
	printf("Enter Number of Rows: ");
	scanf("%d", &n);
	printf("Enter Number of columns: ");
	scanf("%d", &m);

	printf("Enter 2D Array: \n");
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			scanf("%d", &arr2D[i][j]);
		}
	}

	
	arr1D = (int*)malloc(n * m * sizeof(int));

	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			
			arr1D[i * m + j] = arr2D[i][j];
		}
	}

	printf("1D Array: ");

	for (i = 0; i < n * m; ++i) {
		printf("%d ", arr1D[i]);
	}

}