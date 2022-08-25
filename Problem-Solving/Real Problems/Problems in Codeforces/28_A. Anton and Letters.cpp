#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    set<char> s;
    for (int i = 0; i < a.size(); i++)
    {
        char temp = a[i];
        if (temp >= 'a' && temp <= 'z')
        {
            s.insert(temp);
        }
    }
    cout << s.size() << endl;
}