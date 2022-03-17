#include <stdio.h>

int main()
{
    int a, i;

    printf("Enter a number to see ODD and EVEN number :: ");

    scanf("%d", &a);

    if (a % 2 == 0 || a % 2 != 0)
    {
        printf("The even number is :: ");

        for (i = 0; i <= a; i = i + 2) // make sure increments is       i = i+2
        {
            printf("%d ", i);
        }

        printf("\nThe odd number is :: ");

        for (i = 1; i <= a; i = i + 2) // make sure increments is       i = i+2
        {
            printf("%d ", i);
        }
    }
}
