#include <stdio.h>
int main()
{
    float a, b;
    char op;
    scanf("%f", &a);
    scanf(" %c", &op);
    scanf("%f", &b);
    if (op == '+')
    {
        printf("%f", a + b);
    }
    else if (op == '-')
    {
        printf("%f", a - b);
    }
    else if (op == '*')
    {
        printf("%f", a * b);
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            printf("Division by Zero Error");
        }
        else
        {
            printf("%f", a / b);
        }
    }
    else
    {
        printf("Operator Error");
    }
    return 0;
}