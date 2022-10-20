#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d %d", 4, a - 4);
    }
    else
        printf("%d %d", 9, a - 9);
}
