#include <stdio.h>

int main()
{
    int value = 0, test;

    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        char a[4];

        scanf("%s", &a);

        if (a[0] == 'X' && a[1] == '+' && a[2] == '+')
        {
            value++;
        }
        if (a[0] == 'X' && a[1] == '-' && a[2] == '-')
        {
            value--;
        }
        if (a[0] == '-' && a[1] == '-' && a[2] == 'X')
        {
            value--;
        }
        if (a[0] == '+' && a[1] == '+' && a[2] == 'X')
        {
            value++;
        }
    }

    printf("%d", value);
}