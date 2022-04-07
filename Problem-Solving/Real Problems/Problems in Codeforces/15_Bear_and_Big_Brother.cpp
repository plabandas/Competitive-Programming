#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 1;
    cin >> a >> b;

    for (int i = 0; i < 30; i++)
    {
        if (a * 3 > b * 2)
        {
            break;
        }
        else if (a * 3 <= b * 2)
        {
            count++;
            a = a * 3;
            b = b * 2;
        }
    }

    cout << count << endl;
}
