#include <stdio.h>
#include <stdlib.h>
int **mat(int r, int c)
{
    int **retmat = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        *(retmat + i) = (int *)malloc(c * sizeof(int));
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (*(retmat + i) + j));
        }
    }
    return retmat;
}
void printmat(int **mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
int **malmat(int **mat1, int **mat2, int r, int c, int r2)
{
    int **resmat = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        *(resmat + i) = (int *)malloc(c * sizeof(int));
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(*(resmat + i) + j) = 0;
            for (int k = 0; k < r2; k++)
            {
                *(*(resmat + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
        }
    }
    return resmat;
}
void freemat(int **mat, int r)
{
    for (int i = 0; i < r; i++)
    {
        free(*(mat + i));
    }
    free(mat);
}
int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if (c1 != r2)
    {
        printf("Multipication not possible");
        return 0;
    }
    int **mat1 = mat(r1, c1);
    int **mat2 = mat(r2, c2);
    int **result = malmat(mat1, mat2, r1, c2, r2);
    printmat(result, r1, c2);
    freemat(mat1, r1);
    freemat(mat2, r2);
    freemat(result, r1);
    return 0;
}