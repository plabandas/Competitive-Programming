#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    int v;
    cin >> a;

    for (int i = 0; i < a.size(); i = i + 2)
    {

        for (int j = i; j < a.size(); j = j + 2)
        {
            int temp = a[i];
            if (a[i] > a[j])
            {
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << endl
         << a << endl;
}
