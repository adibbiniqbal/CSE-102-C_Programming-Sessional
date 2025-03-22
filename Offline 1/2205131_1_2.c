#include <stdio.h>
int main()
{
    float i, t;
    scanf("%f", &i);
    if (i < 0)
    {
        printf("Negative Income Error");
        return 0;
    }
    else if (i > 1650000)
    {
        t = (i - 1650000) * 0.25 + 500000 * 0.2 + 400000 * 0.15 + 300000 * 0.1 + 100000 * 0.05;
    }
    else if (i > 1150000)
    {
        t = (i - 1150000) * 0.2 + 400000 * 0.15 + 300000 * 0.1 + 100000 * 0.05;
    }
    else if (i > 750000)
    {
        t = (i - 750000) * 0.15 + 300000 * 0.1 + 100000 * 0.05;
    }
    else if (i > 450000)
    {
        t = (i - 450000) * 0.1 + 100000 * 0.05;
    }
    else if (i > 350000)
    {
        t = (i - 350000) * 0.05;
    }
    else if (i < 350000)
    {
        t = 0;
    }
    printf("%f", t);
    return 0;
}