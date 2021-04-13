#include<stdio.h>

int main()
{
    printf("\nPlease enter a number: ");
    int a;
    scanf("%d", &a);

    if (a < 5)
    {
        printf("\nThe entered number less than 5");
    }
    else if (a > 5)
    {
        printf("\nThe entered number greater than 5");
    }
    else
    {
        printf("\nThe entered number equals 5");
    }

    return 0;
}
