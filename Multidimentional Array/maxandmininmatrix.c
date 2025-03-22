#include <stdio.h>
#include <limits.h>
int main()
{
    int r, c, imax, imin, jmax, jmin;
    int min = INT_MAX;
    int max = INT_MIN;
    printf("Enter row and column number of matrix : ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter elements of matrix : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int currentmax = mat[i][j];
            int currentmin = mat[i][j];
            if (currentmin < min)
            {
                min = currentmin;
                imin = i;
                jmin = j;
            }
            if (currentmax > max)
            {
                max = currentmax;
                imax = i;
                jmax = j;
            }
        }
    }
    printf("Max element is %d at index (%d,%d)\n", max, imax, jmax);
    printf("Min element is %d at index (%d,%d)", min, imin, jmin);
    return 0;
}