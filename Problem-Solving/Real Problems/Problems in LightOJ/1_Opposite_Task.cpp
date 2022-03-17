#include <bits/stdc++.h>
using namespace std;

int main()

{
    int a;
    int n;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        cin >> n;

        if (n <= 10)
        {
            cout << n << " " << 0 << endl;
        }
        else
        {
            cout << 10 << " " << n - 10 << endl;
        }
    }
}
