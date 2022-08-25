#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b == 1)
        {
            count++;
            cout << "HARD" << endl;
            break;
        }
    }
    if (count == 0)
    {
        cout << "EASY" << endl;
    }
}