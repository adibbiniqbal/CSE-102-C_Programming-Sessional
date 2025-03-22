#include <stdio.h>
int main()
{
    int n, m, max1, min1, query1count, candidate1count;
    unsigned int maxnum, minnum, candidate, k, i;
    scanf("%d", &n);
    for (int cn = 1; cn <= n; cn++)
    {
        max1 = 0, min1 = 32, maxnum = 0, minnum = 4294967295;
        printf("Case %d\n", cn);
        scanf("%u", &k);
        scanf("%d", &m);
        query1count = 0;
        for (i = 1 << 31; i > 0; i = i >> 1)
            if (k & i)
                query1count++;
        while (m--)
        {
            scanf("%u", &candidate);
            candidate1count = 0;
            for (i = 1 << 31; i > 0; i = i >> 1)
                (candidate & i) ? printf("1"), candidate1count++ : printf("0");
            printf("\n");
            int absdif = query1count > candidate1count ? query1count - candidate1count : candidate1count - query1count;
            if (absdif < min1 || (absdif == min1 && minnum > candidate))
            {
                min1 = absdif;
                minnum = candidate;
            }
            if (absdif > max1 || (absdif == max1 && maxnum < candidate))
            {
                max1 = absdif;
                maxnum = candidate;
            }
        }
        for (i = 1 << 31; i > 0; i = i >> 1)
            (k & i) ? printf("1") : printf("0");
        printf("\nNumber with Minimum Difference: %u\n", minnum);
        printf("Number with Maximum Difference: %u\n\n", maxnum);
    }
    return 0;
}