#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if(i == ceil(a.size()/2))
        {
            break;
        }

        char temp = a[i];
        a[i] = a[a.size() - i -1];
        a[a.size()-1] = temp;
    }
    cout << a << endl;
}