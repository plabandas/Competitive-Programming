#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        if (temp + b <= 5)
        {
            count++;
        }
    }
    cout << count / 3 << endl;
}