#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d", &n,&m);

	int arr2d[n][m];

	for(int row=0; row<n; ++row)
	{
		for(int col=0; col<m; ++col)
		{
			scanf("%d",&arr2d[row][col]);
		}
	}

	for(int row=0; row<n; ++row)
	{
		for(int left=0; left<m/2; ++left)
		{
			int right = m-1-left;

			// swap(arr2d[row][left],arr2d[row][right]);
			int temp = arr2d[row][left];
			arr2d[row][left] = arr2d[row][right];
			arr2d[row][right] = temp;
		}
	}

	for(int row=0; row<n; ++row)
	{
		for(int col=0; col<m; ++col)
		{
			printf("%d ", arr2d[row][col]);
		}
		printf("\n");
	}



}
