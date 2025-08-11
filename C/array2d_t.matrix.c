#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr2d[n][n];

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            scanf("%d", &arr2d[row][col]);
        }
    }

    int primary_sum = 0;

    // Sum primary diagonal (once)
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            if (row == col)
            {
                primary_sum += arr2d[row][col];
            }
        }
    }

    int secondary_sum = 0;

    // Sum secondary diagonal
    for (int row = 0; row < n; ++row)
    {
        int col = n - 1 - row;
        secondary_sum += arr2d[row][col];
    }

    int ans = primary_sum - secondary_sum;

    if (ans < 0)
    {
        ans = -ans;
    }

    printf("%d", ans);

    return 0;
}
