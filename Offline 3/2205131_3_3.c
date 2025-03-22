#include <stdio.h>
#include <string.h>

int main()
{
    char s[21], p[21];
    scanf("%[^\n]", s);
    scanf(" %[^\n]", p);
    // printf("s.length() = %d, p.length() = %d\n\n", strlen(s), strlen(p));
    int i = 0, j = 0;
    while (1)
    {
        if (s[i] != p[j] && p[j] != '.')
        {
            // printf("Con1\n");
            if (p[j + 1] != '*') // ith char of s and jth char of p doesn't match also there is no . or * hence must be false
            {
                printf("false\n");
                return 0;
            }
            j += 2; // goes to next position of star
        }
        else // ith char of s and jth char of p matches or jth char of p is .
        {
            if (p[j + 1] == '*')
            {
                // printf("Con2-1\n");
                if (p[j] == '.') //.* is found hence, every string will be true for this
                {
                    printf("true\n");
                    return 0;
                }
                while (s[i] == p[j]) // checking repeat of element before * in s
                    i++;
                j += 2; // goes to index after *
            }
            else // j+1th element of p is not star
            {
                // printf("Con2-2\n");
                i++, j++;
            }
        }
        if ((i > strlen(s) && j < strlen(p)) || (i < strlen(s) && j > strlen(p)))
        {
            printf("false\n");
            return 0;
        }
        else if (i >= strlen(s) && j >= strlen(p))
        {
            printf("true\n");
            return 0;
        }
    }
    return 0;
}