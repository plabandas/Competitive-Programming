#include <bits/stdc++.h>
using namespace std;

int main()

{

    int n;
    cin >> n;
    
    string pk;

    for (int i = 1; i <= n; i++)
    {

        cin >> pk;

        if (pk.length() <= 10)
        {

            cout << pk << endl;
        }

        else
        {
            cout << pk.front() << pk.length() - 2 << pk.back() << endl;
        }
    }
}
