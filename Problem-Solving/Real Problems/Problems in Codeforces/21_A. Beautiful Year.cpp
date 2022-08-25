#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp;
    int y, a, b, c, d;
    set<int> plaban;
    cin >> y;
    for (int i = y + 1; i <= 9050; i++)
    {
        // int i = 1990;
        a = i % 10;
        plaban.insert(a);
        b = ((i - a) / 10) % 10;
        plaban.insert(b);
        c = (((i - a) / 10 - b) / 10) % 10;
        plaban.insert(c);
        d = ((((i - a) / 10 - b) / 10 - c) / 10) % 10;
        plaban.insert(d);

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << i;
            break;
        }
    }
}