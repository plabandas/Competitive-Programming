
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, max = 0, temp = 0;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        temp = temp - b + c;
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << max << endl;
}