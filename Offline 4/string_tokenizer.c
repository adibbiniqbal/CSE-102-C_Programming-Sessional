#include <stdio.h>
#include <stdlib.h>

char **strTokenize(char *str, char delim)
{
    int maxTokenLen = 0, tokenLen = 0, tokens = 1;
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == delim)
        {
            maxTokenLen = (maxTokenLen > tokenLen) ? maxTokenLen : tokenLen;
            tokenLen = 0;
            tokens++;
        }
        else
        {
            tokenLen++;
        }
        ptr++;
    }
    maxTokenLen = (maxTokenLen > tokenLen) ? maxTokenLen : tokenLen;

    char **rtnStrArr = (char **)malloc((tokens + 1) * sizeof(char *));
    for (int i = 0; i < tokens; i++)
    {
        *(rtnStrArr + i) = (char *)malloc((maxTokenLen + 1) * sizeof(char));
    }
    *(rtnStrArr + tokens) = NULL;

    ptr = str;
    for (int i = 0; i < tokens; i++)
    {
        int j = 0;
        while (*ptr == delim && *ptr != '\0')
            ptr++;
        while (*ptr != delim && *ptr != '\0')
        {
            *(j + *(rtnStrArr + i)) = *ptr;
            ptr++, j++;
        }
        *(j + *(rtnStrArr + i)) = '\0';
    }
    return rtnStrArr;
}
void _printTokens(char **tokens)
{
    printf("The tokens are:\n");
    while (*tokens)
    {
        printf("%s\n", *tokens);
        tokens++;
    }
}
void _printTokensUnique(char **tokens)
{
    printf("\nThe unique tokens are:\n");
    char **start = tokens;
    while (*tokens)
    {
        int unique = 1;
        char **checker = start;
        while (checker != tokens)
        {
            char *ptrChecker = *checker;
            char *ptrTokens = *tokens;
            while (*ptrChecker == *ptrTokens && *ptrChecker != '\0' && *ptrTokens != '\0')
            {
                ptrChecker++;
                ptrTokens++;
            }
            if (*ptrChecker == '\0' && *ptrTokens == '\0')
            {
                unique = 0;
                break;
            }
            checker++;
        }
        if (unique)
            printf("%s\n", *tokens);
        tokens++;
    }
}
void _freeTokens(char **tokens)
{
    char **temp = tokens;
    while (*temp)
    {
        free(*temp);
        temp++;
    }
    free(tokens);
}

int main(int argc, char **args)
{
    int string_length;
    scanf("%d", &string_length);

    char delim;
    scanf(" %c", &delim);

    char *str = (char *)malloc(sizeof(char) * (string_length + 1));
    scanf("%s", str);

    printf("inputs are: %d %c(%d) %s\n", string_length, delim, (int)delim, str);

    char **tokens = strTokenize(str, delim);
    _printTokens(tokens);
    _printTokensUnique(tokens);
    _freeTokens(tokens);

    return 0;
}