#include <stdio.h>

int operation_with_operators(char sign, int a, int b)
{
    if (sign == '+')
        return a + b;
    else if (sign == '-')
        return a - b;
    else if (sign == '*')
        return a * b;
    else if (sign == '/')
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            printf("Error: Division by bero\n");
            return -1;
        }
    else
    {
        printf("Error: Invalid Operator!\n");
        return -1;
    }
}

int main()
{
    char operator_sign;
    scanf(" %c", &operator_sign);
    int a, b;
    printf("Input two Integer Numbers: ");
    scanf("%d %d", &a, &b);

    int result = operation_with_operators(operator_sign, a, b);

    printf("%d", result);
}
