#include <stdio.h>
#include <string.h>

int main()
{
    char str[5 * 104 + 1];
    int max = 0;
    if (scanf("%[^\n]", str) == 0)
    {
        printf("0");
        return 0;
    }
    int i = 0;
    while (1)
    {
        int alreadyFoundChars[127] = {0};
        int currentMax = 0;
        while (1)
        {
            // printf("index %d\t - \t", i);
            // printf("Currently working with %c\t", str[i]);
            // printf("alreadyFoundChars[str[i] - '\\0'] = %d\n", alreadyFoundChars[str[i] - '\0']);
            if (alreadyFoundChars[str[i]] == 0)
            {
                currentMax++;
                alreadyFoundChars[str[i]] = 1;
                i++;
                if (i >= strlen(str))
                {
                    max = (currentMax > max) ? currentMax : max;
                    break;
                }
            }
            else if (alreadyFoundChars[str[i]] == 1)
            {
                max = (currentMax > max) ? currentMax : max;
                break;
            }
        }
        if (i >= strlen(str))
            break;
    }
    printf("%d", max);
    return 0;
}