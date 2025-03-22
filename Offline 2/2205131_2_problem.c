#include <stdio.h>
int main()
{
    int n, m, max1, min1, multiplier, query1count,candidate1count;
    unsigned long long int querybinary, maxnum, minnum, candidate, candidatenum, number, candidatebinary, k;
    scanf("%d", &n);
    for (int cn = 1; cn <= n; cn++)
    {
        max1 = 0, min1 = 32, maxnum = 0, minnum = 4294967295;
        printf("Case %d\n", cn);
        scanf("%llu", &k);
        scanf("%d", &m);
        multiplier = 1;
        querybinary = 0;
        query1count = 0;
        while (k)
        {
            querybinary += multiplier * (k % 2);
            query1count += k % 2;
            k = k / 2;
            multiplier *= 10;
        }
        while (m--)
        {
            scanf("%llu", &candidatenum);
            multiplier = 1;
            candidatebinary = 0;
            candidate1count = 0;
            number = candidatenum;
            while (candidatenum)
            {
                candidatebinary += multiplier * (candidatenum % 2);
                candidate1count += candidatenum % 2;
                candidatenum = candidatenum / 2;
                multiplier *= 10;
            }
            printf("%032llu\n", candidatebinary);
            int absdif = query1count > candidate1count ? query1count - candidate1count : candidate1count - query1count;
            if (absdif < min1 || (absdif == min1 && minnum > number))
            {
                min1 = absdif;
                minnum = number;
            }
            if (absdif > max1 || (absdif == max1 && maxnum < number))
            {
                max1 = absdif;
                maxnum = number;
            }
        }
        printf("%032u\n", querybinary);
        printf("Number with Minimum Difference: %llu\n", minnum);
        printf("Number with Maximum Difference: %llu\n\n", maxnum);
    }
    return 0;
}