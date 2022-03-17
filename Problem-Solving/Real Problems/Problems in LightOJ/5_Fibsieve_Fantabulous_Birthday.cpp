#include <stdio.h>
#include <math.h>

int main()
{
    int cases;
    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        long long sec, root, check, row, col;
        scanf("%lld", &sec);

        root = ceil(sqrt(sec));
        check = root * root - sec;

        if (root > check)
        {
            col = check + 1;
            row = root;
        }
        else
        {
            col = root;
            row = sec - (root - 1) * (root - 1);
        }

        if (root % 2 == 0)
        {
            long long temp = col;
            col = row;
            row = temp;
        }
        printf("Case %lld: %lld %lld", i, col, row);
        printf("\n");
    }
}
