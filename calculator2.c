#include <stdio.h>

int main()
{
    float n1, n2;
    char op;

    printf("Enter the expression (operand1 operator operand2):\n");
    scanf("%f %c %f", &n1, &op, &n2);

    /* Check error first */
    if (op == '/' && n2 == 0)
    {
        printf("Error: Division by zero is not allowed\n");
        return 0;   // stop program here
    }

    switch (op)
    {
        case '+':
            printf("Addition is %f\n", n1 + n2);
            break;

        case '-':
            printf("Subtraction is %f\n", n1 - n2);
            break;

        case '*':
            printf("Multiplication is %f\n", n1 * n2);
            break;

        case '/':
            printf("Division is %f\n", n1 / n2);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
