#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr1[m], arr2[n], arr3[m + n];
    for (int i = 0; i < m; ++i)
        scanf("%d", &arr1[i]);
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr2[i]);

    int arr1index = 0, arr2index = 0, arr3index = 0;
    while (1)
    {
        if (arr1index == m || arr2index == n)
            break;
        if (arr1[arr1index] < arr2[arr2index])
            arr3[arr3index++] = arr1[arr1index++];
        else
            arr3[arr3index++] = arr2[arr2index++];
    }
    while (arr1index < m)
        arr3[arr3index++] = arr1[arr1index++];

    while (arr2index < n)
        arr3[arr3index++] = arr2[arr2index++];

    // for (int i = 0; i < m + n; ++i)
    //     printf("%d ", arr3[i]);
    printf("\n");
    if ((m + n) % 2 == 1) // Odd
    {
        printf("%d", arr3[(m + n) / 2]);
    }
    else // Even
    {
        printf("%.2f", (arr3[(m + n) / 2 - 1] + arr3[(m + n) / 2]) / (float)2);
    }
    return 0;
}