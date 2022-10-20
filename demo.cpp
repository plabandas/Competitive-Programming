#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 7;
    int y = ++x  +  ++x;
    printf("%d %d", x, y);

    int a = 3, b = 4 ;
    a = a == b == 0 ;
    printf("\n%d %d", a, b);

    return 0;
}
