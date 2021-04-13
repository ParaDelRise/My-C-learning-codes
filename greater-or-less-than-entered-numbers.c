#include <stdio.h>

int main()
{
    printf("\nPlease enter two numbers");
    int a, b;
    printf("\nFirst Number: ");
    scanf("%d", &a);
    printf("\nSecond Number: ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("\nThe first number (%d) less than second number (%d)", a, b);
    }
    else if (a > b)
    {
        printf("\nThe first number (%d) greater than second number (%d)", a, b);
    }
    else
    {
        printf("\nThe numbers are equal to eacssssh other.");
    }

    return 0;
}
