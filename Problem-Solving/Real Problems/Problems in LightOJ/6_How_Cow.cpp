#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases, cow, p, q, r, s, x, y;
    scanf("%d", &cases);

    for (int i = 1; i <= cases; i++)
    {
        cin >> p >> q >> r >> s;

        cin >> cow;

        cout << "Case " << i << ":" << endl;

        for (int j = 1; j <= cow; j++)
        {
            cin >> x >> y;

            if (x > p && x < r && y > q && y < s)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
