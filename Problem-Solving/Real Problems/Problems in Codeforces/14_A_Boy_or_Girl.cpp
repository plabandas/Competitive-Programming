#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> doc;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        doc.insert(a[i]);
    }

    if (doc.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
