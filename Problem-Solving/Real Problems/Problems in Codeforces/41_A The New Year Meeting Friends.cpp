#include <stdio.h>

int main()
{
    bool b = true;
    int temp, max = 0, min = 0;
    for (int i = 0; i < 3; i++)
    {
        int a;
        scanf("%d", &a);
        if (b == true)
        {
            max = a;
            min = a;
            b = false;
        }
        if (max < a)
            max = a;
        if (min > a)
            min = a;
    }
    printf("%d", max - min);
}
