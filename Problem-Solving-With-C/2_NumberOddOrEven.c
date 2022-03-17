#include <stdio.h>
/// auto arrange code command shift + alt + F
int main()
{

    int a;

    printf("Enter your Number :: ");

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Your entered number %d is :: Even ", a);
    }
    else
    {
        printf("Your entered number %d is :: Odd ", a);
    }
}